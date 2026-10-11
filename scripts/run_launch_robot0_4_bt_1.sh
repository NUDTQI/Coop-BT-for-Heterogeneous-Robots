#!/bin/bash

# 多机器人行为树启动脚本 - 独立终端版本（修复版）
# 修正：所有机器人使用 127.0.0.1，仅通过端口区分

WORKSPACE_PATH="/home/sherry/coop-bt-ws"

# 颜色输出
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
RED='\033[0;31m'
NC='\033[0m'

# 函数：在独立终端中启动机器人
launch_robot_in_terminal() {
    local robot_name=$1
    local bt_tree_path=$2
    
    # 修正：所有机器人使用 127.0.0.1，仅端口不同
    local web_addr="127.0.0.1"
    local ros_addr="127.0.0.1"
    
    # 端口配置（仅通过端口区分不同机器人）
    case ${robot_name} in
        turtle0) local ros_port=9090; local web_port=8085 ;;
        turtle1) local ros_port=9091; local web_port=8086 ;;
        turtle2) local ros_port=9092; local web_port=8087 ;;
        turtle3) local ros_port=9093; local web_port=8088 ;;
        turtle4) local ros_port=9094; local web_port=8089 ;;
        turtle5) local ros_port=9095; local web_port=8090 ;;
        *) echo -e "${RED}未知的机器人：${robot_name}${NC}"; return 1 ;;
    esac
    
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
    
    # 保持终端打开
    launch_cmd="${launch_cmd} && echo '' && echo '按 Ctrl+C 停止此机器人' && wait"
    
    echo -e "${GREEN}启动 ${robot_name} 终端窗口 (Web: http://${web_addr}:${web_port})...${NC}"
    
    # 使用 gnome-terminal 启动新窗口
    gnome-terminal --title="${robot_name} (Port ${web_port})" -- bash -c "${launch_cmd}"
    
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
    echo -e "${YELLOW}Web GUI 地址 (全部使用 127.0.0.1):${NC}"
    echo -e "  turtle0: http://127.0.0.1:8085"
    echo -e "  turtle1: http://127.0.0.1:8086"
    echo -e "  turtle2: http://127.0.0.1:8087"
    echo -e "  turtle3: http://127.0.0.1:8088"
    echo -e "  turtle4: http://127.0.0.1:8089"
    echo -e "${GREEN}========================================${NC}"
}

# 主程序
main() {
    echo -e "${GREEN}========================================${NC}"
    echo -e "${GREEN}  多机器人行为树启动程序${NC}"
    echo -e "${GREEN}  (独立终端版本 - 修复版)${NC}"
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
