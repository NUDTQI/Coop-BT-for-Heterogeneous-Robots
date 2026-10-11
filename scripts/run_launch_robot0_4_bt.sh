#!/bin/bash

# 多机器人行为树启动脚本 - 独立终端版本
# 基于 jilu3 配置

WORKSPACE_PATH="/home/sherry/coop-bt-ws"

# 颜色输出
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m'

# 机器人配置
declare -A ROS_PORTS
declare -A ROS_ADDRS
declare -A WEB_PORTS
declare -A WEB_ADDRS

ROS_PORTS[turtle0]=9090;   ROS_ADDRS[turtle0]=127.0.0.1;   WEB_PORTS[turtle0]=8085;   WEB_ADDRS[turtle0]=127.0.0.1
ROS_PORTS[turtle1]=9095;   ROS_ADDRS[turtle1]=127.1.0.0;   WEB_PORTS[turtle1]=8090;   WEB_ADDRS[turtle1]=127.0.1.0
ROS_PORTS[turtle2]=9100;   ROS_ADDRS[turtle2]=127.1.1.0;   WEB_PORTS[turtle2]=8095;   WEB_ADDRS[turtle2]=127.1.1.0
ROS_PORTS[turtle3]=9105;   ROS_ADDRS[turtle3]=127.1.1.1;   WEB_PORTS[turtle3]=8100;   WEB_ADDRS[turtle3]=127.1.1.1
ROS_PORTS[turtle4]=9110;   ROS_ADDRS[turtle4]=127.2.1.1;   WEB_PORTS[turtle4]=8105;   WEB_ADDRS[turtle4]=127.2.1.1

# 函数：在独立终端中启动机器人
launch_robot_in_terminal() {
    local robot_name=$1
    local bt_tree_path=$2
    
    local ros_port=${ROS_PORTS[$robot_name]}
    local ros_addr=${ROS_ADDRS[$robot_name]}
    local web_port=${WEB_PORTS[$robot_name]}
    local web_addr=${WEB_ADDRS[$robot_name]}
    
    # 构建启动命令
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
    
    # 添加行为树参数
    if [ -n "${bt_tree_path}" ]; then
        launch_cmd="${launch_cmd} \
            load_default_tree:=True \
            default_tree_path:=${bt_tree_path} \
            default_tree_tick_frequency_hz:=10.0 \
            default_tree_control_command:=1"
    fi
    
    # 添加保持终端打开的命令
    launch_cmd="${launch_cmd} && echo '按任意键关闭此窗口...' && read -n 1"
    
    echo -e "${GREEN}启动 ${robot_name} 终端窗口...${NC}"
    
    # 使用 gnome-terminal 启动新窗口
    gnome-terminal --title="${robot_name} 行为树" -- bash -c "${launch_cmd}"
    
    sleep 1
}

# 函数：启动 turtle0-turtle4
launch_turtle0_to_4() {
    local bt_tree_path=$1
    
    echo -e "${BLUE}========================================${NC}"
    echo -e "${BLUE}  为 turtle0-turtle4 开启独立终端${NC}"
    echo -e "${BLUE}========================================${NC}"
    
    for robot in turtle0 turtle1 turtle2 turtle3 turtle4; do
        launch_robot_in_terminal "${robot}" "${bt_tree_path}"
    done
    
    echo -e "${GREEN}========================================${NC}"
    echo -e "${GREEN}  所有终端已打开！${NC}"
    echo -e "${GREEN}========================================${NC}"
    echo -e "${YELLOW}Web GUI 地址:${NC}"
    echo -e "  turtle0: 127.0.0.1:8085/index.html"
    echo -e "  turtle1: 127.0.1.0:8090/index.html"
    echo -e "  turtle2: 127.1.1.0:8095/index.html"
    echo -e "  turtle3: 127.1.1.1:8100/index.html"
    echo -e "  turtle4: 127.2.1.1:8105/index.html"
}

# 主程序
main() {
    echo -e "${GREEN}========================================${NC}"
    echo -e "${GREEN}  多机器人行为树启动程序${NC}"
    echo -e "${GREEN}  (独立终端版本)${NC}"
    echo -e "${GREEN}========================================${NC}"
    
    local bt_tree_path=""
    local launch_range=""
    
    while [ $# -gt 0 ]; do
        case $1 in
            -t|--tree)
                bt_tree_path="$2"
                shift 2
                ;;
            -0-4|--turtle0-4)
                launch_range="0-4"
                shift
                ;;
            -r|--robot)
                launch_robot_in_terminal "$2" "${bt_tree_path}"
                exit 0
                ;;
            -h|--help)
                echo "用法：$0 [选项]"
                echo "  -t, --tree <path>      行为树文件路径"
                echo "  -0-4, --turtle0-4      同时启动 turtle0-turtle4"
                echo "  -r, --robot <name>     启动指定机器人"
                echo "  -h, --help             显示帮助"
                exit 0
                ;;
            *)
                echo -e "${RED}未知选项：$1${NC}"
                exit 1
                ;;
        esac
    done
    
    if [ "${launch_range}" = "0-4" ]; then
        launch_turtle0_to_4 "${bt_tree_path}"
    else
        echo -e "${YELLOW}请指定启动方式：-0-4 或 -r${NC}"
    fi
}

main "$@"
