#!/bin/bash

# 多机器人行为树自动化运行脚本
# 功能：启动机器人 -> 加载 YAML -> 运行 8 秒 -> 停止 -> 切换新 YAML

WORKSPACE_PATH="/home/sherry/coop-bt-ws"
BT_CONTROLLER="${WORKSPACE_PATH}/scripts/bt_tree_automator.py"

# 颜色输出
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
RED='\033[0;31m'
NC='\033[0m'

# 配置参数
RUN_DURATION=8.0
TICK_FREQUENCY=10.0
TREE_LOAD_CAP_BASE="file:///home/sherry/下载/remote_exe/tree_load_cap_int_success"
TREE_FINAL_BASE="file:///home/sherry/下载/coop_bt/tree(55)4" #"file:///home/sherry/下载/remote_exe/tree(64)4" #

# 机器人配置
declare -a ROBOTS=("turtle0" "turtle1" "turtle2" "turtle3" "turtle4") #
declare -A ROS_PORTS=(
    ["turtle0"]=9090
    ["turtle1"]=9091
    ["turtle2"]=9092
    ["turtle3"]=9093
    ["turtle4"]=9094
)
declare -A WEB_PORTS=(
    ["turtle0"]=8085
    ["turtle1"]=8086
    ["turtle2"]=8087
    ["turtle3"]=8088
    ["turtle4"]=8089
)

setup_environment() {
    echo -e "${BLUE}========================================${NC}"
    echo -e "${BLUE}  设置 ROS2 环境...${NC}"
    echo -e "${BLUE}========================================${NC}"
    
    cd "${WORKSPACE_PATH}" || {
        echo -e "${RED}❌ 错误：无法进入工作空间${NC}"
        return 1
    }
    
    source install/setup.bash || {
        echo -e "${RED}❌ 错误：source install/setup.bash 失败${NC}"
        return 1
    }
    
    source ./install/setup.bash || {
        echo -e "${RED}❌ 错误：source ./install/setup.bash 失败${NC}"
        return 1
    }
    
    echo -e "${GREEN}✓ 环境设置完成${NC}"
    return 0
}

launch_robot_capability() {
    local robot_name=$1
    local bt_tree_path=$2
    local ros_port=${ROS_PORTS[$robot_name]}
    local web_port=${WEB_PORTS[$robot_name]}
    local web_addr="127.0.0.1"
    local ros_addr="127.0.0.1"

    if [ -z "${ros_port}" ] || [ -z "${web_port}" ]; then
        echo -e "${RED}❌ 未知的机器人：${robot_name}${NC}"
        return 1
    fi
    
    echo -e "${GREEN}🚀 启动 ${robot_name} (Web: http://127.0.0.1:${web_port})${NC}"
    
    local launch_cmd="cd ${WORKSPACE_PATH} && \
        source install/setup.bash && \
        source ./install/setup.bash && \
        ros2 launch ros_bt_py ros_bt_py_capability.launch.py \
            enable_web_interface:=True \
            robot_namespace:=${robot_name} \
            ros_port:=${ros_port} \
            ros_address:=${ros_addr} \
            web_server_port:=${web_port} \
            web_server_address:=${web_addr}"
    
    if [ -n "${bt_tree_path}" ]; then
        launch_cmd="${launch_cmd} \
            load_default_tree:=True \
            default_tree_path:=${bt_tree_path} \
            default_tree_tick_frequency_hz:=${TICK_FREQUENCY} \
            default_tree_control_command:=1"
    fi
    
    gnome-terminal --title="${robot_name} Capability" -- bash -c "${launch_cmd} && echo '按 Ctrl+C 停止' && wait" &
    
    sleep 2
}

run_bt_sequence() {
    local robot_name=$1
    local first_tree=$2
    local second_tree=$3
    
    echo -e "${BLUE}========================================${NC}"
    echo -e "${BLUE}  ${robot_name}: 执行行为树序列${NC}"
    echo -e "${BLUE}========================================${NC}"
    
    echo -e "${YELLOW}[1/3] ${robot_name}: 加载并运行第一个树...${NC}"
    echo -e "      树文件：${first_tree}"
    
    python3 "${BT_CONTROLLER}" \
        -n "${robot_name}" \
        -t "${first_tree}" \
        -d "${RUN_DURATION}" \
        -f "${TICK_FREQUENCY}" \
        --start
    
    if [ $? -ne 0 ]; then
        echo -e "${RED}❌ ${robot_name}: 第一个树执行失败${NC}"
        return 1
    fi
    
    echo -e "${GREEN}✓ ${robot_name}: 第一个树执行完成${NC}"
    sleep 1
    
    echo -e "${YELLOW}[2/3] ${robot_name}: 切换到第二个树...${NC}"
    echo -e "      树文件：${second_tree}"
    
    python3 "${BT_CONTROLLER}" \
        -n "${robot_name}" \
        -t "${second_tree}" \
        --stop
    
    sleep 0.5
    
    python3 "${BT_CONTROLLER}" \
        -n "${robot_name}" \
        -t "${second_tree}" \
        -d "${RUN_DURATION}" \
        -f "${TICK_FREQUENCY}" \
        --start
    
    if [ $? -ne 0 ]; then
        echo -e "${RED}❌ ${robot_name}: 第二个树执行失败${NC}"
        return 1
    fi
    
    echo -e "${GREEN}✓ ${robot_name}: 第二个树执行完成${NC}"
    
    # echo -e "${YELLOW}[3/3] ${robot_name}: 停止行为树${NC}"
    # python3 "${BT_CONTROLLER}" \
    #     -n "${robot_name}" \
    #     --stop
    
    echo -e "${GREEN}========================================${NC}"
    echo -e "${GREEN}  ${robot_name}: 所有任务完成！${NC}"
    echo -e "${GREEN}========================================${NC}"
}

run_all_robots_parallel() {
    local pids=()
    
    echo -e "${BLUE}========================================${NC}"
    echo -e "${BLUE}  并行启动所有机器人 (${#ROBOTS[@]}个)${NC}"
    echo -e "${BLUE}========================================${NC}"
    
    for robot in "${ROBOTS[@]}"; do
        (
            first_tree="${TREE_LOAD_CAP_BASE}(${robot}).yaml"
            second_tree="${TREE_FINAL_BASE}_${robot}.yaml"
            
            # if [ ! -f "${first_tree}" ]; then
            #     echo -e "${RED}❌ ${robot}: 文件不存在：${first_tree}${NC}"
            #     exit 1
            # fi
            
            # if [ ! -f "${second_tree}" ]; then
            #     echo -e "${RED}❌ ${robot}: 文件不存在：${second_tree}${NC}"
            #     exit 1
            # fi
            
            run_bt_sequence "${robot}" "${first_tree}" "${second_tree}"
        ) &
        pids+=($!)
    done
    
    echo -e "${YELLOW}等待所有机器人完成任务...${NC}"
    for pid in "${pids[@]}"; do
        wait ${pid}
    done
    
    echo -e "${GREEN}========================================${NC}"
    echo -e "${GREEN}  所有机器人任务执行完毕！${NC}"
    echo -e "${GREEN}========================================${NC}"
}

run_all_robots_sequential() {
    echo -e "${BLUE}========================================${NC}"
    echo -e "${BLUE}  串行启动所有机器人 (${#ROBOTS[@]}个)${NC}"
    echo -e "${BLUE}========================================${NC}"
    
    for robot in "${ROBOTS[@]}"; do
        first_tree="${TREE_LOAD_CAP_BASE}(${robot}).yaml"
        second_tree="${TREE_FINAL_BASE}_${robot}.yaml"
        
        # if [ ! -f "${first_tree}" ]; then
        #     echo -e "${RED}❌ ${robot}: 文件不存在：${first_tree}${NC}"
        #     continue
        # fi
        
        # if [ ! -f "${second_tree}" ]; then
        #     echo -e "${RED}❌ ${robot}: 文件不存在：${second_tree}${NC}"
        #     continue
        # fi
        
        run_bt_sequence "${robot}" "${first_tree}" "${second_tree}"
        sleep 1
    done
    
    echo -e "${GREEN}========================================${NC}"
    echo -e "${GREEN}  所有机器人任务执行完毕！${NC}"
    echo -e "${GREEN}========================================${NC}"
}

stop_all() {
    echo -e "${YELLOW}停止所有机器人...${NC}"
    pkill -f "ros2 launch.*ros_bt_py"
    pkill -f "bt_tree_automator"
    echo -e "${GREEN}✓ 已停止${NC}"
}

show_robot_info() {
    echo -e "${BLUE}========================================${NC}"
    echo -e "${BLUE}  机器人配置信息${NC}"
    echo -e "${BLUE}========================================${NC}"
    for robot in "${ROBOTS[@]}"; do
        local ros_port=${ROS_PORTS[$robot]}
        local web_port=${WEB_PORTS[$robot]}
        echo -e "  ${robot}: ROS Port=${ros_port}, Web Port=${web_port} (http://127.0.0.1:${web_port})"
    done
    echo -e "${BLUE}========================================${NC}"
}

main() {
    echo -e "${GREEN}========================================${NC}"
    echo -e "${GREEN}  多机器人行为树自动化运行${NC}"
    echo -e "${GREEN}========================================${NC}"
    
    local mode="parallel"
    local robots_to_run=()
    
    while [ $# -gt 0 ]; do
        case $1 in
            -p|--parallel)
                mode="parallel"
                shift
                ;;
            -s|--sequential)
                mode="sequential"
                shift
                ;;
            -r|--robot)
                robots_to_run+=("$2")
                shift 2
                ;;
            -d|--duration)
                RUN_DURATION="$2"
                shift 2
                ;;
            -f|--frequency)
                TICK_FREQUENCY="$2"
                shift 2
                ;;
            -c|--check)
                echo -e "${BLUE}检查运行状态...${NC}"
                ros2 node list 2>/dev/null | grep -E "turtle[0-3]" || echo "未找到机器人节点"
                exit 0
                ;;
            --stop)
                stop_all
                exit 0
                ;;
            -h|--help)
                echo "用法：$0 [选项]"
                echo ""
                echo "选项:"
                echo "  -p, --parallel       并行运行所有机器人 (默认)"
                echo "  -s, --sequential     串行运行所有机器人"
                echo "  -r, --robot <name>   运行指定机器人 (可多次指定)"
                echo "  -d, --duration <sec> 每个树运行持续时间 (默认：8 秒)"
                echo "  -f, --frequency <hz> tick 频率 (默认：10 Hz)"
                echo "  -c, --check          检查运行状态"
                echo "  --stop               停止所有机器人"
                echo "  -h, --help           显示帮助"
                echo ""
                echo "示例:"
                echo "  $0                          # 并行运行所有机器人"
                echo "  $0 -s                       # 串行运行所有机器人"
                echo "  $0 -r turtle0 -r turtle1    # 只运行 turtle0 和 turtle1"
                echo "  $0 -d 10 -f 20              # 运行 10 秒，频率 20Hz"
                exit 0
                ;;
            *)
                echo -e "${RED}未知选项：$1${NC}"
                exit 1
                ;;
        esac
    done
    
    setup_environment || exit 1
    
    if [ ${#robots_to_run[@]} -eq 0 ]; then
        robots_to_run=("${ROBOTS[@]}")
    fi
    
    echo -e "${BLUE}启动机器人能力节点...${NC}"
    for robot in "${robots_to_run[@]}"; do
        launch_robot_capability "${robot}" ""
    done
    
    sleep 3
    
    if [ "${mode}" = "parallel" ]; then
        run_all_robots_parallel
    else
        run_all_robots_sequential
    fi
}

#trap stop_all EXIT INT TERM

main "$@"