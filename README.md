# Coop-BT-for-Heterogeneous-Robots

This is a Behavior Tree Framework for multi-robot cooperation. It is built on the BT library project of ros-bt-py(https://github.com/fzi-forschungszentrum-informatik/ros_bt_py), and sets up nodes and code structures for heterogeneous robot modeling and cooperation.
It includes a web GUI and all the building blocks you need to build moderately advanced mission control Behavior Trees for heterogeneous robot and achieve their cooperation. The framework is the supplementary code for the article *"Coop-BT: A Behavior-Tree Framework for Local Capability-Based Subteam Formation in Heterogeneous Robot Teams“*.


## How To Use Coop-BT


### Documentation

Simply execute the following commands in your shell to get browsable HTML documentation, including some tutorials:

```bash
$ cd src/ros_bt_py/doc
$ make html
$ cd build
$ python -m http.server & xdg-open http://localhost:8000/html
```

### Installation

To actually start using Coop-BT, you need to install its dependencies first:

```bash
$ cd colcon_workspace
$ rosdep install --from-paths src --ignore-src -r -y
```

Then you can just build the package:

```bash
$ source install/setup.bash
$ source ./install/setup.bash
$ colcon build
```

**Note**: Do not build the workspace using `--symlink-install` as this is currently not working
with generate_parameter_library. You will get an error when running `ModuleNotFoundError: No module named 'ros_bt_py.parameters'`.

### Running

To start a BT for a single robot, the command is same as ros-bt-py:
```bash
$ source install/setup.bash
$ source ./install/setup.bash
$ ros2 launch ros_bt_py ros_bt_py_capability.launch.py enable_web_interface:=True
```

The command will start a BT server and the rosbridge and webserver needed for the
GUI.
Afterwards, you can open `http://localhost:8085/index.html` to use the editor.

To start BTs for a group of heterogeneous robots, the example command is packed in the `scripts` folder:

```bash
$ source install/setup.bash
$ source ./install/setup.bash
$ chmod +x scripts/*.sh scripts/*.py
$ ./scripts/run_launch_robot0_4_bt_2.sh
```
The command will start BTs for five turtlebots named turtle0-turtle5. Each robot can be controlled by the BT editor from `http://127.0.0.1:8085/index.html` to `http://127.0.0.1:8089/index.html`. The launch options for each BT are editable in the launch file `ros_bt_py_capability.launch.py`, based on the basic options of ros_bt_py.




### Stand-alone Web Interface

The web interface can be launched stand alone of the library, using the following command:

```bash
$ ros2 launch ros_bt_py_web_gui ros_bt_py_web_gui.launch.py web_server_port:=8085 web_server_address:=0.0.0.0
```

For the BTs in the example of the paper, their web server ports are different from 8085 to 8089, bu their web server addresses are the same 127.0.0.1.

## Heterogeneous Robot Capability Settings

For robots with different capabilities, the kind of capabilities can be set in the *`capabilities` folder* of the assigned package in src folder. Each capability has its own sub-folder containing yaml files of its interface and implementations. You can describe the specific capabiltiy implementation by using the BT web Gui after its sub-folder and interface has been build.

To configuring the capabilities for a single robot, the loading tree should be run first before invoking any of the capabilities. You can place the capability you want to configure for it under a package in the src folder, and specify the name of the package used for capability loading in the loading tree. The structure of the loading tree is shown in the *`tree/coop_bt`* folder. And the specific process of robot capability configuration and cooperative operation is shown in scripts/run_launch_robot0_4_bt_2.sh.


## Simulation Environment Setting

The simulation workshop is in the *`simulation-environment` branch*. To view the running process of the example, you need to open the simulation environment before starting the Coop-BT. The command is as follows.

```bash
$ cd try4_ws
$ source install/setup.bash
$ source ./install/setup.bash
$ source ./install/tb3_worlds/share/tb3_worlds/local_setup.bash
$ ros2 launch tb3_worlds tb3_demo_world.launch.py
```
In addition, you need to put the `try4_ws` folder in the same directory as the src folder of Coop-BT.