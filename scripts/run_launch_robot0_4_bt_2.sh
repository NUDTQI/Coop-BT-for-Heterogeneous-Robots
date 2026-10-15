#!/bin/bash

# Multi-robot behavior tree automated execution script
# Function: Launch robot -> Load YAML -> Run for 8s -> Stop -> Switch to new YAML

WORKSPACE_PATH="/home/sherry/coop-bt-ws"
BT_CONTROLLER="${WORKSPACE_PATH}/scripts/bt_tree_automator.py"


GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
RED='\033[0;31m'
NC='\033[0m'

# Configuration parameters
RUN_DURATION=8.0
TICK_FREQUENCY=10.0
TREE_LOAD_CAP_BASE="file:///home/sherry/下载/remote_exe/tree_load_cap_int_success"
TREE_FINAL_BASE="file:///home/sherry/下载/coop_bt/tree(55)4" #"file:///home/sherry/下载/remote_exe/tree(64)4" #

# Robot configuration
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
    echo -e "${BLUE}  Setting up ROS2 environment...${NC}"
    echo -e "${BLUE}========================================${NC}"
    
    cd "${WORKSPACE_PATH}" || {
        echo -e "${RED}❌ Error: Cannot enter workspace${NC}"
        return 1
    }
    
    source install/setup.bash || {
        echo -e "${RED}❌ Error: source install/setup.bash failed${NC}"
        return 1
    }
    
    source ./install/setup.bash || {
        echo -e "${RED}❌ Error: source ./install/setup.bash failed${NC}"
        return 1
    }
    
    echo -e "${GREEN}✓ Environment setup completed${NC}"
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
        echo -e "${RED}❌ Unknown robot: ${robot_name}${NC}"
        return 1
    fi
    
    echo -e "$ Launch ${robot_name} (Web: http://127.0.0.1:${web_port})${NC}"
    
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
    
    gnome-terminal --title="${robot_name} Capability" -- bash -c "${launch_cmd} && echo 'Press Ctrl+C to stop' && wait" &
    
    sleep 2
}

run_bt_sequence() {
    local robot_name=$1
    local first_tree=$2
    local second_tree=$3
    
    echo -e "${BLUE}========================================${NC}"
    echo -e "${BLUE}  ${robot_name}: Executing behavior tree sequence${NC}"
    echo -e "${BLUE}========================================${NC}"
    
    echo -e "${YELLOW}[1/3] ${robot_name}: Loading and running the first tree...${NC}"
    echo -e "      Tree file: ${first_tree}"
    
    python3 "${BT_CONTROLLER}" \
        -n "${robot_name}" \
        -t "${first_tree}" \
        -d "${RUN_DURATION}" \
        -f "${TICK_FREQUENCY}" \
        --start
    
    if [ $? -ne 0 ]; then
        echo -e "${RED}❌ ${robot_name}: First tree execution failed${NC}"
        return 1
    fi
    
    echo -e "${GREEN}✓ ${robot_name}: First tree execution completed${NC}"
    sleep 1
    
    echo -e "${YELLOW}[2/3] ${robot_name}: Switching to the second tree...${NC}"
    echo -e "      Tree file: ${second_tree}"
    
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
        echo -e "${RED}❌ ${robot_name}: Second tree execution failed${NC}"
        return 1
    fi
    
    echo -e "${GREEN}✓ ${robot_name}: Second tree execution completed${NC}"
    
    
    
    echo -e "${GREEN}========================================${NC}"
    echo -e "${GREEN}  ${robot_name}: All tasks completed!${NC}"
    echo -e "${GREEN}========================================${NC}"
}

run_all_robots_parallel() {
    local pids=()
    
    echo -e "${BLUE}========================================${NC}"
    echo -e "${BLUE}  Launching all robots in parallel (${#ROBOTS[@]})${NC}"
    echo -e "${BLUE}========================================${NC}"
    
    for robot in "${ROBOTS[@]}"; do
        (
            first_tree="${TREE_LOAD_CAP_BASE}(${robot}).yaml"
            second_tree="${TREE_FINAL_BASE}_${robot}.yaml"
            
            
            
            run_bt_sequence "${robot}" "${first_tree}" "${second_tree}"
        ) &
        pids+=($!)
    done
    
    echo -e "${YELLOW}Waiting for all robots to complete tasks...${NC}"
    for pid in "${pids[@]}"; do
        wait ${pid}
    done
    
    echo -e "${GREEN}========================================${NC}"
    echo -e "${GREEN}  All robot tasks completed! ${NC}"
    echo -e "${GREEN}========================================${NC}"
}

run_all_robots_sequential() {
    echo -e "${BLUE}========================================${NC}"
    echo -e "${BLUE}  Launching all robots sequentially (${#ROBOTS[@]})${NC}"
    echo -e "${BLUE}========================================${NC}"
    
    for robot in "${ROBOTS[@]}"; do
        first_tree="${TREE_LOAD_CAP_BASE}(${robot}).yaml"
        second_tree="${TREE_FINAL_BASE}_${robot}.yaml"
        
        
        
        run_bt_sequence "${robot}" "${first_tree}" "${second_tree}"
        sleep 1
    done
    
    echo -e "${GREEN}========================================${NC}"
    echo -e "${GREEN}  All robot tasks completed!${NC}"
    echo -e "${GREEN}========================================${NC}"
}

stop_all() {
    echo -e "${YELLOW}Stopping all robot...${NC}"
    pkill -f "ros2 launch.*ros_bt_py"
    pkill -f "bt_tree_automator"
    echo -e "${GREEN}✓ Stopped${NC}"
}

show_robot_info() {
    echo -e "${BLUE}========================================${NC}"
    echo -e "${BLUE}  Robot configuration info ${NC}"
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
    echo -e "${GREEN}  Multi-robot behavior tree automated execution${NC}"
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
                echo -e "${BLUE}Checking running status...${NC}"
                ros2 node list 2>/dev/null | grep -E "turtle[0-3]" || echo "Could not find the robot nodes."
                exit 0
                ;;
            --stop)
                stop_all
                exit 0
                ;;
            -h|--help)
                echo "Usage: $0 [options]"
                echo ""
                echo "Options:"
                echo "  -p, --parallel       Run all robots in parallel (default)"
                echo "  -s, --sequential     Run all robots sequentially"
                echo "  -r, --robot <name>   Run specified robot (can be specified multiple times)"
                echo "  -d, --duration <sec> Duration for each tree execution (default: 8 seconds)"
                echo "  -f, --frequency <hz> Tick frequency (default: 10 Hz)"
                echo "  -c, --check          Check running status"
                echo "  --stop               Stop all robots"
                echo "  -h, --help           Display help"
                echo ""
                echo "Examples:"
                echo "  $0                          # Run all robots in parallel"
                echo "  $0 -s                       # Run all robots sequentially"
                echo "  $0 -r turtle0 -r turtle1    # Run only turtle0 and turtle1"
                echo "  $0 -d 10 -f 20              # Run for 10 seconds, frequency 20Hz"
                exit 0
                ;;
            *)
                echo -e "${RED}Unknown option: $1${NC}"
                exit 1
                ;;
        esac
    done
    
    setup_environment || exit 1
    
    if [ ${#robots_to_run[@]} -eq 0 ]; then
        robots_to_run=("${ROBOTS[@]}")
    fi
    
    echo -e "${BLUE}Launching robot capability nodes...${NC}"
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