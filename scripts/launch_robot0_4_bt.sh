#!/bin/bash

# 多机器人行为树自动启动脚本
# 基于 jilu3 配置，支持 turtle0-turtle4 批量启动

WORKSPACE_PATH="/home/sherry/coop-bt-ws"

# 颜色输出
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m'

# 函数：设置环境
setup_environment() {
    echo -e "${BLUE}========================================${NC}"
    echo -e "${BLUE}  设置 ROS2 环境...${NC}"
    echo -e "${BLUE}========================================${NC}"
    
    cd "${WORKSPACE_PATH}" || {
        echo -e "${RED}错误：无法进入工作空间 ${WORKSPACE_PATH}${NC}"
        return 1
    }
    
    source install/setup.bash || {
        echo -e "${RED}错误：source install/setup.bash 失败${NC}"
        return 1
    }
    
    source ./install/setup.bash || {
        echo -e "${RED}错误：source ./install/setup.bash 失败${NC}"
        return 1
    }
    
    echo -e "${GREEN}✓ 环境设置完成${NC}"
    return 0
}

# 函数：获取机器人配置
get_robot_config() {
    local robot_name=$1
    case ${robot_name} in
        turtle0)
            echo "ros_port:=9090 ros_address:=127.0.0.1 web_server_port:=8085 web_server_address:=127.0.0.1"
            ;;
        turtle1)
            echo "ros_port:=9095 ros_address:=127.1.0.0 web_server_port:=8090 web_server_address:=127.1.0.0"
            ;;
        turtle2)
            echo "ros_port:=9100 ros_address:=127.1.1.0 web_server_port:=8095 web_server_address:=127.1.1.0"
            ;;
        turtle3)
            echo "ros_port:=9105 ros_address:=127.1.1.1 web_server_port:=8100 web_server_address:=127.1.1.1"
            ;;
        turtle4)
            echo "ros_port:=9110 ros_address:=127.2.1.1 web_server_port:=8105 web_server_address:=127.2.1.1"
            ;;
        turtle5)
            echo "ros_port:=9115 ros_address:=127.3.1.1 web_server_port:=8110 web_server_address:=127.3.1.1"
            ;;
        *)
            echo ""
            ;;
    esac
}

# 函数：启动单个机器人
launch_robot() {
    local robot_name=$1
    local bt_tree_path=$2
    local config
    config=$(get_robot_config "${robot_name}")
    
    if [ -z "${config}" ]; then
        echo -e "${RED}错误：未知的机器人 ${robot_name}${NC}"
        return 1
    fi
    
    echo -e "${GREEN}========================================${NC}"
    echo -e "${GREEN}  启动 ${robot_name}${NC}"
    echo -e "${GREEN}========================================${NC}"
    
    # 构建启动命令
    local launch_cmd="ros2 launch ros_bt_py ros_bt_py_capability.launch.py \
        enable_web_interface:=True \
        robot_namespace:=${robot_name} \
        ${config}"
    
    # 如果有行为树文件，添加相关参数
    if [ -n "${bt_tree_path}" ]; then
        launch_cmd="${launch_cmd} \
            load_default_tree:=True \
            default_tree_path:=${bt_tree_path} \
            default_tree_tick_frequency_hz:=10.0 \
            default_tree_control_command:=1"
    fi
    
    echo -e "${YELLOW}执行命令：${launch_cmd}${NC}"
    eval ${launch_cmd} &
    
    sleep 2
    echo -e "${GREEN}✓ ${robot_name} 启动完成${NC}"
    return 0
}

# 函数：启动 turtle0-turtle4
launch_turtle0_to_4() {
    local bt_tree_path=$1
    local robots="turtle0 turtle1 turtle2 turtle3 turtle4"
    
    echo -e "${BLUE}========================================${NC}"
    echo -e "${BLUE}  批量启动 turtle0-turtle4${NC}"
    echo -e "${BLUE}========================================${NC}"
    
    for robot in ${robots}; do
        launch_robot "${robot}" "${bt_tree_path}"
        sleep 1  # 每个机器人间隔 1 秒启动
    done
    
    echo -e "${GREEN}========================================${NC}"
    echo -e "${GREEN}  所有机器人启动完成！${NC}"
    echo -e "${GREEN}========================================${NC}"
}

# 函数：检查节点状态
check_nodes() {
    echo -e "${BLUE}========================================${NC}"
    echo -e "${BLUE}  检查运行中的节点...${NC}"
    echo -e "${BLUE}========================================${NC}"
    
    ros2 node list 2>/dev/null | grep -E "(capability|assignment|mission|remote)" || echo "未找到相关节点"
    
    echo -e "${BLUE}========================================${NC}"
    echo -e "${BLUE}  Web GUI 地址:${NC}"
    echo -e "  turtle0: http://127.0.0.1:8085"
    echo -e "  turtle1: http://127.1.0.0:8090"
    echo -e "  turtle2: http://127.1.1.0:8095"
    echo -e "  turtle3: http://127.1.1.1:8100"
    echo -e "  turtle4: http://127.2.1.1:8105"
    echo -e "${BLUE}========================================${NC}"
}

# 函数：停止所有进程
stop_all() {
    echo -e "${YELLOW}停止所有 ros2 进程...${NC}"
    pkill -f "ros2 launch" 2>/dev/null
    echo -e "${GREEN}✓ 已停止${NC}"
}

# 主程序
main() {
    echo -e "${GREEN}========================================${NC}"
    echo -e "${GREEN}  多机器人行为树启动程序${NC}"
    echo -e "${GREEN}  基于 jilu3 配置${NC}"
    echo -e "${GREEN}========================================${NC}"
    
    # 解析参数
    local robot_name=""
    local bt_tree_path=""
    local launch_range=""
    
    while [ $# -gt 0 ]; do
        case $1 in
            -r|--robot)
                robot_name="$2"
                shift 2
                ;;
            -t|--tree)
                bt_tree_path="$2"
                shift 2
                ;;
            -0-4|--turtle0-4)
                launch_range="0-4"
                shift
                ;;
            -c|--check)
                check_nodes
                exit 0
                ;;
            -s|--stop)
                stop_all
                exit 0
                ;;
            -h|--help)
                echo "用法：$0 [选项]"
                echo "  -r, --robot <name>     启动指定机器人 (turtle0-turtle5)"
                echo "  -t, --tree <path>      行为树文件路径"
                echo "  -0-4, --turtle0-4      同时启动 turtle0-turtle4"
                echo "  -c, --check            检查节点状态"
                echo "  -s, --stop             停止所有进程"
                echo "  -h, --help             显示帮助"
                echo ""
                echo "示例:"
                echo "  $0 -0-4                          # 启动 turtle0-turtle4"
                echo "  $0 -0-4 -t /path/to/tree.bt      # 带行为树文件"
                echo "  $0 -r turtle0                    # 只启动 turtle0"
                exit 0
                ;;
            *)
                echo -e "${RED}未知选项：$1${NC}"
                exit 1
                ;;
        esac
    done
    
    # 设置环境
    setup_environment || exit 1
    
    # 启动机器人
    if [ "${launch_range}" = "0-4" ]; then
        launch_turtle0_to_4 "${bt_tree_path}"
    elif [ -n "${robot_name}" ]; then
        launch_robot "${robot_name}" "${bt_tree_path}"
    else
        echo -e "${YELLOW}请指定启动方式:${NC}"
        echo -e "  -0-4  启动 turtle0-turtle4"
        echo -e "  -r    启动单个机器人"
        echo -e "使用 -h 查看帮助${NC}"
    fi
    
    # 检查节点
    sleep 3
    check_nodes
    
    echo -e "${GREEN}========================================${NC}"
    echo -e "${GREEN}  按 Ctrl+C 退出${NC}"
    echo -e "${GREEN}========================================${NC}"
    
    wait
}

# 捕获退出信号
trap stop_all EXIT INT TERM

main "$@"
