#!/usr/bin/env python3
"""
Multi Robot BT Controller
"""

import subprocess
import argparse
import sys
import os
import signal
from typing import Dict, List, Optional
from dataclasses import dataclass


@dataclass
class RobotConfig:
    
    name: str
    ros_port: int
    ros_address: str
    web_server_port: int
    web_server_address: str


ROBOT_CONFIGS: Dict[str, RobotConfig] = {
    "turtle0": RobotConfig("turtle0", 9090, "127.0.0.1", 8085, "127.0.0.1"),
    "turtle1": RobotConfig("turtle1", 9095, "127.1.0.0", 8090, "127.1.0.0"),
    "turtle2": RobotConfig("turtle2", 9100, "127.1.1.0", 8095, "127.1.1.0"),
    "turtle3": RobotConfig("turtle3", 9105, "127.1.1.1", 8100, "127.1.1.1"),
    "turtle4": RobotConfig("turtle4", 9110, "127.2.1.1", 8105, "127.2.1.1"),
    "turtle5": RobotConfig("turtle5", 9115, "127.3.1.1", 8110, "127.3.1.1"),
}

WORKSPACE_PATH = "" #"/home/coop-bt-ws"


class MultiRobotBTController:
    
    
    def __init__(self, workspace: str = WORKSPACE_PATH):
        self.workspace = workspace
        self.processes: List[subprocess.Popen] = []
        self.env = os.environ.copy()
    
    def setup_environment(self) -> bool:
        
        print(f"Setting the workspace configuration: {self.workspace}")
        
        try:
            
            os.chdir(self.workspace)
            
            
            source_cmds = [
                "source install/setup.bash",
                "source ./install/setup.bash"
            ]
            
            for cmd in source_cmds:
                result = subprocess.run(
                    f"bash -c '{cmd}'",
                    shell=True,
                    capture_output=True,
                    text=True
                )
                if result.returncode != 0:
                    print(f"Warning: {cmd} fail to execute")
            
            # update the environment parameters
            result = subprocess.run(
                "bash -c 'source install/setup.bash && source ./install/setup.bash && env'",
                shell=True,
                capture_output=True,
                text=True
            )
            
            for line in result.stdout.split('\n'):
                if '=' in line:
                    key, value = line.split('=', 1)
                    self.env[key] = value
            
            print("Complete the environment settings")
            return True
            
        except Exception as e:
            print(f"Failed to complete the environment settings: {e}")
            return False
    
    def launch_robot(
        self,
        robot_name: str,
        tree_path: Optional[str] = None,
        tick_frequency: float = 10.0
    ) -> bool:
        """Start a robot"""
        
        if robot_name not in ROBOT_CONFIGS:
            print(f"Unknown robot: {robot_name}")
            return False
        
        config = ROBOT_CONFIGS[robot_name]
        
        print(f"Start robot {robot_name}")
        print(f"   ROS Port: {config.ros_port}")
        print(f"   Web Port: {config.web_server_port}")
        
        
        cmd = [
            "ros2", "launch", "ros_bt_py", "ros_bt_py_capability.launch.py",
            f"enable_web_interface:=True",
            f"robot_namespace:={robot_name}",
            f"ros_port:={config.ros_port}",
            f"ros_address:={config.ros_address}",
            f"web_server_port:={config.web_server_port}",
            f"web_server_address:={config.web_server_address}",
        ]
        
        
        if tree_path:
            cmd.extend([
                f"load_default_tree:=True",
                f"default_tree_path:={tree_path}",
                f"default_tree_tick_frequency_hz:={tick_frequency}",
                f"default_tree_control_command:=1",  # START
            ])
        
        print(f"   Command: {' '.join(cmd)}")
        
        try:
            process = subprocess.Popen(
                cmd,
                env=self.env,
                preexec_fn=os.setsid
            )
            self.processes.append(process)
            print(f"Succeed to start robot {robot_name}")
            return True
        except Exception as e:
            print(f"Failed to start robot {robot_name} :{e}")
            return False
    
    def launch_all_robots(
        self,
        tree_path: Optional[str] = None,
        delay: float = 2.0
    ) -> None:
        """Start all robots"""
        
        print("Starting all robots at one time")
        
        for robot_name in ROBOT_CONFIGS.keys():
            self.launch_robot(robot_name, tree_path)
            import time
            time.sleep(delay)
    
    def check_nodes(self) -> None:
        
        
        print("Checking the status of nodes...")
        print("-" * 50)
        
        result = subprocess.run(
            ["ros2", "node", "list"],
            capture_output=True,
            text=True,
            env=self.env
        )
        
        bt_nodes = []
        for line in result.stdout.split('\n'):
            if any(kw in line for kw in ['capability', 'assignment', 'mission', 'remote']):
                bt_nodes.append(line)
        
        if bt_nodes:
            for node in bt_nodes:
                print(f"   {node}")
        else:
            print("Could not find any BT nodes.")
        
        print("-" * 50)
    
    def check_topics(self) -> None:
        
        
        print("Checking topic...")
        print("-" * 50)
        
        result = subprocess.run(
            ["ros2", "topic", "list"],
            capture_output=True,
            text=True,
            env=self.env
        )
        
        for line in result.stdout.split('\n'):
            if any(kw in line for kw in ['tf', 'capability', 'task', 'capability']):
                print(f"   {line}")
        
        print("-" * 50)
    
    def stop_all(self) -> None:
        
        
        print("Stop all processes..")
        
        for process in self.processes:
            try:
                process.terminate()
            except Exception:
                pass
        
        self.processes.clear()
        print("Succeed to stop all processes.")
    
    def wait(self) -> None:
        
        
        try:
            for process in self.processes:
                process.wait()
        except KeyboardInterrupt:
            self.stop_all()


def main():
    parser = argparse.ArgumentParser(
        description="Multi-robot BT controller"
    )
    parser.add_argument(
        "-r", "--robot",
        choices=list(ROBOT_CONFIGS.keys()),
        help="start a single robot"
    )
    parser.add_argument(
        "-a", "--all",
        action="store_true",
        help="start all robots"
    )
    parser.add_argument(
        "-t", "--tree",
        type=str,
        help="BT file path"
    )
    parser.add_argument(
        "-f", "--frequency",
        type=float,
        default=10.0,
        help="tick frequency of BT (Hz)"
    )
    parser.add_argument(
        "-c", "--check",
        action="store_true",
        help="check node status"
    )
    parser.add_argument(
        "-w", "--workspace",
        type=str,
        default=WORKSPACE_PATH,
        help="workspace path"
    )
    
    args = parser.parse_args()
    
    controller = MultiRobotBTController(workspace=args.workspace)
    
    
    if not controller.setup_environment():
        sys.exit(1)
    
    try:
        if args.check:
            controller.check_nodes()
            controller.check_topics()
        elif args.all:
            controller.launch_all_robots(tree_path=args.tree)
            controller.check_nodes()
            controller.wait()
        elif args.robot:
            controller.launch_robot(
                args.robot,
                tree_path=args.tree,
                tick_frequency=args.frequency
            )
            controller.check_nodes()
            controller.wait()
        else:
            parser.print_help()
            print("Please choose -r/--robot or -a/--all settings")
    
    except KeyboardInterrupt:
        controller.stop_all()
        print("Exited.")
    except Exception as e:
        controller.stop_all()
        print(f"Error：{e}")
        sys.exit(1)


if __name__ == "__main__":
    main()
