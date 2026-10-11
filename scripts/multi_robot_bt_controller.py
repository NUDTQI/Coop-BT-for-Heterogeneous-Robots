#!/usr/bin/env python3
"""
多机器人行为树控制器
基于 jilu3 配置，支持环境自动设置和多机器人管理
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
    """机器人配置类"""
    name: str
    ros_port: int
    ros_address: str
    web_server_port: int
    web_server_address: str


# 基于 jilu3 的机器人配置
ROBOT_CONFIGS: Dict[str, RobotConfig] = {
    "turtle0": RobotConfig("turtle0", 9090, "127.0.0.1", 8085, "127.0.0.1"),
    "turtle1": RobotConfig("turtle1", 9095, "127.1.0.0", 8090, "127.1.0.0"),
    "turtle2": RobotConfig("turtle2", 9100, "127.1.1.0", 8095, "127.1.1.0"),
    "turtle3": RobotConfig("turtle3", 9105, "127.1.1.1", 8100, "127.1.1.1"),
    "turtle4": RobotConfig("turtle4", 9110, "127.2.1.1", 8105, "127.2.1.1"),
    "turtle5": RobotConfig("turtle5", 9115, "127.3.1.1", 8110, "127.3.1.1"),
}

WORKSPACE_PATH = "/home/sherry/coop-bt-ws"


class MultiRobotBTController:
    """多机器人行为树控制器"""
    
    def __init__(self, workspace: str = WORKSPACE_PATH):
        self.workspace = workspace
        self.processes: List[subprocess.Popen] = []
        self.env = os.environ.copy()
    
    def setup_environment(self) -> bool:
        """设置 ROS2 环境"""
        print(f"\n🔧 设置工作空间：{self.workspace}")
        
        try:
            # 切换工作目录
            os.chdir(self.workspace)
            
            # 执行 source 命令
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
                    print(f"⚠️ 警告：{cmd} 执行失败")
            
            # 更新环境变量
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
            
            print("✅ 环境设置完成")
            return True
            
        except Exception as e:
            print(f"❌ 环境设置失败：{e}")
            return False
    
    def launch_robot(
        self,
        robot_name: str,
        tree_path: Optional[str] = None,
        tick_frequency: float = 10.0
    ) -> bool:
        """启动单个机器人"""
        
        if robot_name not in ROBOT_CONFIGS:
            print(f"❌ 未知的机器人：{robot_name}")
            return False
        
        config = ROBOT_CONFIGS[robot_name]
        
        print(f"\n🤖 启动 {robot_name}")
        print(f"   ROS Port: {config.ros_port}")
        print(f"   Web Port: {config.web_server_port}")
        
        # 构建启动命令
        cmd = [
            "ros2", "launch", "ros_bt_py", "ros_bt_py_capability.launch.py",
            f"enable_web_interface:=True",
            f"robot_namespace:={robot_name}",
            f"ros_port:={config.ros_port}",
            f"ros_address:={config.ros_address}",
            f"web_server_port:={config.web_server_port}",
            f"web_server_address:={config.web_server_address}",
        ]
        
        # 添加行为树参数
        if tree_path:
            cmd.extend([
                f"load_default_tree:=True",
                f"default_tree_path:={tree_path}",
                f"default_tree_tick_frequency_hz:={tick_frequency}",
                f"default_tree_control_command:=1",  # START
            ])
        
        print(f"   命令：{' '.join(cmd)}")
        
        try:
            process = subprocess.Popen(
                cmd,
                env=self.env,
                preexec_fn=os.setsid
            )
            self.processes.append(process)
            print(f"✅ {robot_name} 启动成功")
            return True
        except Exception as e:
            print(f"❌ {robot_name} 启动失败：{e}")
            return False
    
    def launch_all_robots(
        self,
        tree_path: Optional[str] = None,
        delay: float = 2.0
    ) -> None:
        """启动所有机器人"""
        
        print("\n🚀 批量启动所有机器人")
        
        for robot_name in ROBOT_CONFIGS.keys():
            self.launch_robot(robot_name, tree_path)
            import time
            time.sleep(delay)
    
    def check_nodes(self) -> None:
        """检查运行的节点"""
        
        print("\n📋 检查节点状态")
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
            print("   未找到行为树相关节点")
        
        print("-" * 50)
    
    def check_topics(self) -> None:
        """检查 Topic"""
        
        print("\n📡 检查 Topic")
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
        """停止所有进程"""
        
        print("\n🛑 停止所有进程...")
        
        for process in self.processes:
            try:
                process.terminate()
            except Exception:
                pass
        
        self.processes.clear()
        print("✅ 已停止所有进程")
    
    def wait(self) -> None:
        """等待所有进程"""
        
        try:
            for process in self.processes:
                process.wait()
        except KeyboardInterrupt:
            self.stop_all()


def main():
    parser = argparse.ArgumentParser(
        description="多机器人行为树控制器 (基于 jilu3 配置)"
    )
    parser.add_argument(
        "-r", "--robot",
        choices=list(ROBOT_CONFIGS.keys()),
        help="启动指定机器人"
    )
    parser.add_argument(
        "-a", "--all",
        action="store_true",
        help="启动所有机器人"
    )
    parser.add_argument(
        "-t", "--tree",
        type=str,
        help="行为树文件路径"
    )
    parser.add_argument(
        "-f", "--frequency",
        type=float,
        default=10.0,
        help="行为树执行频率 (Hz)"
    )
    parser.add_argument(
        "-c", "--check",
        action="store_true",
        help="检查节点状态"
    )
    parser.add_argument(
        "-w", "--workspace",
        type=str,
        default=WORKSPACE_PATH,
        help="工作空间路径"
    )
    
    args = parser.parse_args()
    
    controller = MultiRobotBTController(workspace=args.workspace)
    
    # 设置环境
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
            print("\n⚠️ 请指定 -r/--robot 或 -a/--all 参数")
    
    except KeyboardInterrupt:
        controller.stop_all()
        print("\n👋 已退出")
    except Exception as e:
        controller.stop_all()
        print(f"\n❌ 错误：{e}")
        sys.exit(1)


if __name__ == "__main__":
    main()
