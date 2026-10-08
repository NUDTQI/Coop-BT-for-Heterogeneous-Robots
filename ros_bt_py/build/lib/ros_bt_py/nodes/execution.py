"""
Navigation behaviors for TurtleBot3.
"""
import transforms3d
import yaml
import random
import rclpy

from action_msgs.msg import GoalStatus
from rclpy.action import ActionClient
from nav2_msgs.action import NavigateToPose

from ament_index_python.packages import get_package_share_directory


import ros_bt_py#py_trees
import ros_bt_py_interfaces#py_trees_ros
from ros_bt_py_interfaces.msg import Node as NodeMsg, Message, Package
from ros_bt_py.node import Node, Leaf, FlowControl, define_bt_node
from ros_bt_py.node_config import NodeConfig, OptionRef
from ros_bt_py.node_data import NodeData, NodeDataMap
from rclpy.node import Node as ROSNode
from rclpy.node import ReentrantCallbackGroup
from abc import ABC, abstractmethod

from ros_bt_py.ros_helpers import LoggerLevel
from ros_bt_py.helpers import json_encode, json_decode


from ros_bt_py.ros_nodes.action import ActionForSetType, Action
from rclpy.client import Client
from rclpy.task import Future
from ros_bt_py_interfaces.srv import (
    GetCapabilityInterfaces
)
from geometry_msgs.msg import PoseStamped
from std_msgs.msg import Bool
import math
from rclpy.qos import (
    QoSDurabilityPolicy,
    QoSHistoryPolicy,
    QoSProfile,
    QoSReliabilityPolicy,
)
from ros_bt_py_interfaces.msg import (
    DistanceCalculation, 
    CapabilityRequest, 
    CapabilityFeedback, 
    JoinTeam, 
    CapList
)
from ros_bt_py.exceptions import BehaviorTreeException
from rclpy.parameter import Parameter
import time






@define_bt_node(
    NodeConfig(
        options={"file_path":str},#"symbol_name":str,
        inputs={"target_color":str},
        outputs={"origional_cap_req":list},
        max_children=0,
        ))
class GetTaskList(Leaf):
    """Check the state of a symbol"""

    def _do_setup(self):    
        
        self.task_file = self.options["file_path"]
        #self.target = self.inputs["target_color"]
        with open(self.options["file_path"]) as f:
            self.tasks = yaml.load(f, Loader=yaml.FullLoader)
        self.origional_req_pub = self.ros_node.create_publisher(
                CapabilityRequest, #list 和 传递次数 发送人名称
                f"{self.ros_node.get_namespace()}/BehaviorTreeNode/origional_capability_request",
                qos_profile=QoSProfile(
                reliability=QoSReliabilityPolicy.RELIABLE,
                durability=QoSDurabilityPolicy.VOLATILE,
                history=QoSHistoryPolicy.KEEP_LAST,
                depth=10,),
                callback_group=ReentrantCallbackGroup()    ### change 0701
        )

        
    def _do_tick(self):     
        """Output the value of a symbol"""
        self.outputs["origional_cap_req"] = None

        try:
            self.outputs["origional_cap_req"]=self.tasks[self.inputs["target_color"]]  ### list格式，还没有转换成CapReq格式
            self.origional_req = CapList(cap_list=self.outputs["origional_cap_req"])
            self.origional_req_pub.publish(CapabilityRequest(cap_req_list=[self.origional_req],manager=self.ros_node.get_namespace(),depth=0))
        except Exception as exc:
            pass
        self.ros_node.get_logger().info("Get Origional Requirement!")
        set_param = self.ros_node.declare_parameter("origional_task_req",self.outputs["origional_cap_req"])
        if self.outputs["origional_cap_req"] is not None:
            return NodeMsg.SUCCEEDED
        else:
            return NodeMsg.FAILED
        

    def _do_shutdown(self):
        pass

    def _do_reset(self):
        return NodeMsg.IDLE

    def _do_untick(self):
        return NodeMsg.IDLE






@define_bt_node(
    NodeConfig(
        options={},
        inputs={},
        outputs={},#"param_value":OptionRef("param_type")
        max_children=0,
    ))
class ResetSymbol(Leaf):##Leaf？
    """Gets a location name from the queue"""


    def _do_setup(self):#setup(self):
        if not self.ros_node.has_parameter('assigned_symbol'):
            self.assigned_param = self.ros_node.declare_parameter('assigned_symbol',False)
        else:
            self.assigned_param = self.ros_node.set_parameters([Parameter('assigned_symbol',Parameter.Type.BOOL,False)])
        if not self.ros_node.has_parameter('received_symbol'):
            self.received_param = self.ros_node.declare_parameter('received_symbol',False)
        else:
            self.received_param = self.ros_node.set_parameters([Parameter('redceived_symbol',Parameter.Type.BOOL,False)])

        
        
    def _do_tick(self):##tick(self):      #update(self):    
        
        """Checks for the status of the navigation action"""
        # If there is a result, we can check the status of the action directly.
        # Otherwise, the action is still running.
        self.if_pub_success=self.ros_node.get_parameter('assigned_symbol')

        if self.if_pub_success is not None: #target_color is not None:
            
            return NodeMsg.SUCCEEDED
        else:
            return NodeMsg.FAILED
    def _do_shutdown(self):
        pass

    def _do_reset(self):
        return NodeMsg.IDLE

    def _do_untick(self):
        return NodeMsg.IDLE





@define_bt_node(
    NodeConfig(
        options={"symbol_name":str,"symbol_type":type},
        inputs={},
        outputs={"symbol_value":OptionRef("symbol_type")},
        max_children=0,
        ))
class CheckSymbol(Leaf):
    """Check the state of a symbol"""


    @abstractmethod    
    def assignment_symbol_cb(self,msg):
        if msg.own_name is not None:
            self.assignment_symbol = True

    def _do_setup(self):    
        
        
        
        self.__distance_limit_calculate_sub = self.ros_node.create_subscription(
            DistanceCalculation,
            f"{self.ros_node.get_namespace()}/assignment_manager/calculate_distance",
            self.assignment_symbol_cb,
            qos_profile=QoSProfile(
                reliability=QoSReliabilityPolicy.RELIABLE,
                durability=QoSDurabilityPolicy.VOLATILE,
                history=QoSHistoryPolicy.KEEP_LAST,
                depth=10,),
            callback_group=ReentrantCallbackGroup()    ### change 0701
            #latch=False,
            #queue_size=1,
        )
        
        
        self.symbol_param =self.ros_node.get_parameter(self.options["symbol_name"]).value

        

        
        
    def _do_tick(self):     
        """Output the value of a symbol"""
        
        self.outputs["symbol_value"]=self.symbol_param
        if self.symbol_param is not None:
            return NodeMsg.SUCCEEDED
        else:
            return NodeMsg.FAILED
        

    def _do_shutdown(self):
        pass

    def _do_reset(self):
        return NodeMsg.IDLE

    def _do_untick(self):
        return NodeMsg.IDLE






@define_bt_node(
    NodeConfig(
        options={"symbol_type":type},#"symbol_name":str,
        inputs={},
        outputs={"symbol_value":OptionRef("symbol_type"),"feedback_name":str},
        max_children=0,
        ))
class CheckAssignedSymbol(Leaf):
    """Check the state of a symbol"""


    def assignment_symbol_cb(self,msg):
        if msg.own_name is not None:
            self.assigned_symbol = True
            self.own_name = msg.own_name
            self.other_name = msg.other_name
            self.ros_node.get_logger().warn(f"receive manager {self.other_name} msg!")


    def capability_request_cb(self,msg):
        if msg is not None:
            self.depth = msg.depth
            self.cap_req = msg.cap_req_list
            ########################################## 注意
            self.cap_req = self.cap_req[0]
            self.ros_node.get_logger().warn(f"receive cap req msg!")



    def _do_setup(self):    
        
        #self.symbol_param =self.ros_node.get_parameter(self.options["symbol_name"]).value

        
        self.assigned_symbol = False
        
        self.other_name = None

        self.__distance_limit_calculate_sub = self.ros_node.create_subscription(
            DistanceCalculation,
            f"{self.ros_node.get_namespace()}/assignment_manager/calculate_distance",
            self.assignment_symbol_cb,
            qos_profile=QoSProfile(
                reliability=QoSReliabilityPolicy.RELIABLE,
                durability=QoSDurabilityPolicy.VOLATILE,
                history=QoSHistoryPolicy.KEEP_LAST,
                depth=10,),
            callback_group=ReentrantCallbackGroup()    ### change 0701
        )
        
        
        
    def _do_tick(self):     
        """Output the value of a symbol"""
        ###########################################################
        #进入的条件要改，需要接收到req之后才能进入assigned
        ###########################################################

        wait_time_sum = 0
        while self.other_name is None and not self.ros_node.has_parameter("origional_task_req"):
            time.sleep(0.5)
            wait_time_sum = wait_time_sum + 0.5
            self.ros_node.get_logger().warn("wait for req msg!")
            if wait_time_sum > 5:
                self.outputs["symbol_value"]=False
                self.outputs["feedback_name"]=self.ros_node.get_namespace()
                return NodeMsg.SUCCEEDED
        

        self.receive_cap_req_sub = self.ros_node.create_subscription(
            CapabilityRequest,
            f"{self.other_name}/BehaviorTreeNode/capability_request",
            self.capability_request_cb,
            qos_profile=QoSProfile(
                reliability=QoSReliabilityPolicy.RELIABLE,
                durability=QoSDurabilityPolicy.VOLATILE,
                history=QoSHistoryPolicy.KEEP_LAST,
                depth=10,),
            callback_group=ReentrantCallbackGroup()    ### change 0701
        )
        ####### 怎么开启多个订阅，且只当第一个msg receive的时候接受信息并停止其他接收
        # while self.other_name is None:
        #     time.sleep(0.5)
        #     self.ros_node.get_logger().warn("wait for req msg!")
        # set_param = self.ros_node.set_parameters([Parameter('assigned_symbol',Parameter.Type.BOOL,True)])






        
        if self.ros_node.has_parameter("origional_task_req"):
            self.param2 = self.ros_node.get_parameter("origional_task_req")
        else:
            self.param2 = None
        self.param1 = self.ros_node.get_parameter("assigned_symbol")
        #【1】两种开启方式，一种获取距离位置信息，一种获取task list的原始cap req
        if self.param2 is not None:
            set_param = self.ros_node.set_parameters([Parameter('assigned_symbol',Parameter.Type.BOOL,True)])
            self.assigned_symbol = True
            self.outputs["feedback_name"] = self.ros_node.get_namespace()
        else:
            set_param = self.ros_node.set_parameters([Parameter('assigned_symbol',Parameter.Type.BOOL,self.assigned_symbol)])
            self.outputs["feedback_name"]=self.other_name
        
        self.ros_node.get_logger().info("Update assigned symbol!")
            
        self.outputs["symbol_value"]=self.assigned_symbol
        
        if self.outputs["symbol_value"]: # is not None:  ### 同RUNNING一起修改
            #self.own_name == self.ros_node.get_namespace():
            ##################################### 可以改进一下，原来的判断条件也很好
            return NodeMsg.SUCCEEDED
        else:
            return NodeMsg.RUNNING # FAILED        
        ##########################################################################
        ### 需要有一个running状态，此处改为running？
        ##########################################################################                                       

    def _do_shutdown(self):
        pass

    def _do_reset(self):
        return NodeMsg.IDLE

    def _do_untick(self):
        return NodeMsg.IDLE




@define_bt_node(
    NodeConfig(
        options={},
        inputs={"own_cap_list":list, "manager_name":str},
        outputs={"find_all_symbol":bool, "new_cap_request":CapabilityRequest, "cap_record":list, "depth_record":int},
        max_children=0,
        ))
class CalculateCapMatch(Leaf):
    """Check the state of a symbol"""


    def capability_request_cb(self,msg):
        # number = 0
        # if msg is not None:
        #     for numbers in msg.cap_list:
        #         ### 迭代形成矩阵
        #         number = number+1
        # self.ros_node.get_logger().info("Update assigned symbol!")
        if msg is not None:
            self.depth = msg.depth + 1
            self.cap_req = msg.cap_req_list
            ########################################## 注意
            self.cap_req = self.cap_req[0].cap_list
            self.ros_node.get_logger().warn(f"receive cap req msg!")

    def _do_setup(self):    
        
        self.manager = self.inputs["manager_name"]
        #if self.manager is not None:
        #### 当input获取放在do_setup中时，获取到的input是空值，不能正确获取manager信息进入下面的选择
        

        
        
        
    def _do_tick(self):     
        """Output the value of a symbol"""

        self.manager = self.inputs["manager_name"]
        self.depth = None
        #if self.manager is not None:                ########################## 不确定
        if not self.manager == self.ros_node.get_namespace():
            self.capability_request_sub = self.ros_node.create_subscription(
                CapabilityRequest, #list 和 传递次数 发送人名称
                f"{self.manager}/BehaviorTreeNode/capability_request",#f"{self.ros_node.get_namespace()}/BehaviorTreeNode/capability_request",
                self.capability_request_cb,
                qos_profile=QoSProfile(
                reliability=QoSReliabilityPolicy.RELIABLE,
                durability=QoSDurabilityPolicy.VOLATILE,
                history=QoSHistoryPolicy.KEEP_LAST,
                depth=10,),
                callback_group=ReentrantCallbackGroup()    ### change 0701
                )
            self.ros_node.get_logger().warn("Subscribe Cap Req Manager!")
            while self.depth is None:
                time.sleep(0.5)
                self.ros_node.get_logger().warn("wait for req msg!")
        else:   ########################## 不确定
            self.capability_request_sub = self.ros_node.create_subscription(
                CapabilityRequest, #list 和 传递次数 发送人名称
                f"{self.ros_node.get_namespace()}/BehaviorTreeNode/origional_capability_request",#f"{self.ros_node.get_namespace()}/BehaviorTreeNode/capability_request",
                self.capability_request_cb,
                qos_profile=QoSProfile(
                reliability=QoSReliabilityPolicy.RELIABLE,
                durability=QoSDurabilityPolicy.VOLATILE,
                history=QoSHistoryPolicy.KEEP_LAST,
                depth=10,),
                callback_group=ReentrantCallbackGroup()    ### change 0701
                )
            self.ros_node.get_logger().warn("Subscribe Cap Req Itself!")
            self.origional_cap_req = self.ros_node.get_parameter("origional_task_req").value
            self.depth = 0
            self.cap_req = self.origional_cap_req
            self.ros_node.get_logger().warn("Get Origional Cap Require!")
        #else:
        #    self.ros_node.get_logger().warn("Did not find any proper manager!")
        #    return NodeMsg.FAILED


        self.own_cap_list = self.inputs["own_cap_list"]
        self.sum: int = 0
        self.sum_v:int = 0
        self.new_req:list=[0,0,0]    ### 注意修改
        self.record:list = []
        #self.cap_record = {}  #list形式传到feedback部分再整合
        if self.depth == 0:
            self.center_symbol = self.ros_node.declare_parameter("center_symbol", True)
        else:
            self.center_symbol = self.ros_node.declare_parameter("center_symbol", False)

        self.ros_node.get_logger().warn(f"own_cal_list:{len(self.own_cap_list)}, cap_req:{len(self.cap_req)}")

        for v in range(len(self.own_cap_list)):
            if self.own_cap_list[v]*self.cap_req[v]==0:
                self.sum = self.sum+0
                self.new_req[v]=self.cap_req[v]
               
                ## record更新-nsp+能力名称
            if self.own_cap_list[v]*self.cap_req[v]>0:
                self.sum = self.sum+1
                self.new_req[v]=self.cap_req[v]-self.own_cap_list[v]
                self.record.append(v+1)  ### 能力序号列表
                
            self.sum_v=self.sum_v+self.new_req[v]
        #self.cap_record.pop(self.ros_node.get_namespace(),self.record)## record更新-nsp+能力名称



        #self.outputs["symbol_value"]=self.symbol_param
        if self.sum == 0:
            set_param = self.ros_node.set_parameters([Parameter('assigned_symbol', Parameter.Type.BOOL, False)])
            return NodeMsg.FAILED
        else:
            if self.sum_v == 0:
                self.outputs["find_all_symbol"]=True
                declare_param = self.ros_node.declare_parameter("find_all_symbol",True)
                self.ros_node.get_logger().warn(f"find all req!")
                self.outputs["new_cap_request"]=None
                self.outputs["cap_record"]=self.record
                self.outputs["depth_record"]=self.depth
            else:
                self.outputs["find_all_symbol"]=False
                declare_param = self.ros_node.declare_parameter("find_all_symbol",False)
                self.ros_node.get_logger().warn(f"new req:{self.new_req}")
                self.outputs["new_cap_request"]=CapabilityRequest(
                    cap_req_list=[CapList(cap_list=self.new_req)], 
                    manager=self.ros_node.get_namespace(), 
                    depth=self.depth) # +1)
                self.outputs["cap_record"]=self.record
                self.outputs["depth_record"]=self.depth
            return NodeMsg.SUCCEEDED
        

    def _do_shutdown(self):
        pass

    def _do_reset(self):
        return NodeMsg.IDLE

    def _do_untick(self):
        return NodeMsg.IDLE
    





@define_bt_node(
    NodeConfig(
        options={"symbol_type":type},#"symbol_name":str,
        inputs={"depth":int,"manager":str},
        outputs={"symbol_value":OptionRef("symbol_type"),"feedback_msg":CapabilityFeedback},
        max_children=0,
        ))
class CheckReceivedSymbol(Leaf):
    """Check the state of a symbol"""


    def received_symbol_cb(self,msg):
        #if not msg.depth == 0:   ###########################depth=0应该不会自身循环调用
            self.feedback_msg = msg
            self.ros_node.get_logger().warn(f"feedback msg:{self.feedback_msg}")

    def _do_setup(self):    
        
        #self.symbol_param =self.ros_node.get_parameter(self.options["symbol_name"]).value
        self.received_symbol = False
        self.feedback_msg = None

        


        self.__capability_list_feedback_sub = self.ros_node.create_subscription(
            CapabilityFeedback,
            f"{self.ros_node.get_namespace()}/BehaviorTreeNode/capability_feedback",
            self.received_symbol_cb,
            qos_profile=QoSProfile(
                reliability=QoSReliabilityPolicy.RELIABLE,
                durability=QoSDurabilityPolicy.VOLATILE,
                history=QoSHistoryPolicy.KEEP_LAST,
                depth=10,),
            callback_group=ReentrantCallbackGroup()    ### change 0701
        )

        
        
    def _do_tick(self):     
        """Output the value of a symbol"""
        
        manager_name = self.inputs["manager"]
        self.__capability_list_feedback_pub = self.ros_node.create_publisher(
            CapabilityFeedback,
            f"{manager_name}/BehaviorTreeNode/capability_feedback",
            qos_profile=QoSProfile(
                reliability=QoSReliabilityPolicy.RELIABLE,
                durability=QoSDurabilityPolicy.VOLATILE,
                history=QoSHistoryPolicy.KEEP_LAST,
                depth=10,),
            callback_group=ReentrantCallbackGroup()    ### change 0701
        )



        waitiong_time_sum = 0
        while self.feedback_msg is None:
            if self.feedback_msg is not None or self.ros_node.get_parameter('find_all_symbol').value==True:
                self.received_symbol = True
                set_param = self.ros_node.set_parameters([Parameter('received_symbol',Parameter.Type.BOOL,self.received_symbol)])
                set_param = self.ros_node.set_parameters([Parameter('find_all_symbol',Parameter.Type.BOOL,self.received_symbol)])
                if self.feedback_msg is None:
                    self.feedback_msg = CapabilityFeedback(
                    cap_list_record=[],
                    cap_owner_record=[],
                    manager_name=self.inputs["manager"], # ros_node.get_namespace(),   ################## 不确定
                    depth=self.inputs["depth"])
                break
            else:
                time.sleep(0.05)
                self.ros_node.get_logger().warn("waiting for feedback msg...")
                waitiong_time_sum = waitiong_time_sum+0.5
                if waitiong_time_sum == 5:
                    self.ros_node.get_logger().warn("Could not find proper team member!")
                    return NodeMsg.FAILED

            
        self.ros_node.get_logger().info("Update received symbol!")
        self.received_symbol = True
        set_param = self.ros_node.set_parameters([Parameter('received_symbol',Parameter.Type.BOOL,self.received_symbol)])
        set_param = self.ros_node.set_parameters([Parameter('find_all_symbol',Parameter.Type.BOOL,self.received_symbol)])
        #self.outputs["symbol_value"]=self.symbol_param

        self.outputs["symbol_value"]=self.received_symbol
        self.outputs["feedback_msg"]=self.feedback_msg
        if self.ros_node.get_parameter('find_all_symbol').value==True:
            self.outputs["feedback_msg"] = CapabilityFeedback(
                cap_list_record=self.feedback_msg.cap_list_record,
                cap_owner_record=self.feedback_msg.cap_owner_record,
                manager_name=self.inputs["manager"], # self.ros_node.get_namespace(),    ################## 不确定
                depth=self.inputs["depth"])
        #self.__capability_list_feedback_sub.destroy() ########## 不确定
        if self.received_symbol:
            return NodeMsg.SUCCEEDED
        else:
            return NodeMsg.FAILED
        

    def _do_shutdown(self):
        pass

    def _do_reset(self):
        return NodeMsg.IDLE

    def _do_untick(self):
        return NodeMsg.IDLE





@define_bt_node(
    NodeConfig(
        options={},
        inputs={"feedback_msg":CapabilityFeedback, "feedback":list, "manager":str},
        outputs={"team_list":list},
        max_children=0,
        ))
class CapabilityListRecord(Leaf):
    """Check the state of a symbol"""


    def _do_setup(self):    
        
        self.msg = self.inputs["feedback_msg"]
        
        
    def _do_tick(self):     
        """Output the value of a symbol"""
        self.msg = self.inputs["feedback_msg"]
        self.ros_node.get_logger().warn(f"receive feedback_msg:{self.msg}")
        self.feedback_add_list = self.inputs["feedback"]
        self.new_manager_name = self.inputs["manager"]
        self.cap_list_record:list = self.msg.cap_list_record
        self.cap_owner_record:list = self.msg.cap_owner_record
        self.manager_name = self.msg.manager_name
        self.depth = self.msg.depth

        self.__capability_list_feedback_pub = self.ros_node.create_publisher(
            CapabilityFeedback,
            f"{self.new_manager_name}/BehaviorTreeNode/capability_feedback",
            qos_profile=QoSProfile(
                reliability=QoSReliabilityPolicy.RELIABLE,
                durability=QoSDurabilityPolicy.VOLATILE,
                history=QoSHistoryPolicy.KEEP_LAST,
                depth=10,),
            callback_group=ReentrantCallbackGroup()    ### change 0701
        )

        if self.depth == 0:
            self.__team_join_pub = self.ros_node.create_publisher(
                JoinTeam,
                f"{self.ros_node.get_namespace()}/BehaviorTreeNode/join_team",
                qos_profile=QoSProfile(
                reliability=QoSReliabilityPolicy.RELIABLE,
                durability=QoSDurabilityPolicy.VOLATILE,
                history=QoSHistoryPolicy.KEEP_LAST,
                depth=10,),
                callback_group=ReentrantCallbackGroup()
            )

        self.cap_list_record.append(CapList(cap_list=self.feedback_add_list))
        self.new_cap_list_record = self.cap_list_record
        self.cap_owner_record.append(self.ros_node.get_namespace())
        self.new_cap_owner_record = self.cap_owner_record
        if self.depth > 0 : # and self.manager_name == self.ros_node.get_namespace():   ################## 不确定  
            self.__capability_list_feedback_pub.publish(
                CapabilityFeedback(
                    cap_list_record=self.new_cap_list_record,
                    cap_owner_record=self.new_cap_owner_record,
                    manager_name=self.new_manager_name,
                    depth=self.depth-1))
            self.ros_node.get_logger().info(f"Pass New Cap Feedback for {self.new_cap_owner_record}!")
            self.outputs["team_list"] = self.new_cap_owner_record # []  ################## 不确定  
        else:
            if self.ros_node.get_parameter("center_symbol").value == True and self.new_manager_name == self.ros_node.get_namespace():
                ### 是否是new_manager_name不确定
                self.team_list: list=[]
                # for v in self.cap_list_record:
                #     self.team_list.append(v.key)
                ####################################################### 不确定
                self.team_list = self.new_cap_owner_record
                 
                self.ros_node.get_logger().warn(f"team member record: {self.team_list} ; team cap record: {self.new_cap_list_record}")
                self.outputs["team_list"] = self.team_list
                #self.__team_join_pub.publish(JoinTeam(center_name=self.ros_node.get_namespace(),member_list=self.team_list, depth=0))
        #self.outputs["symbol_value"]=self.symbol_param

        #self.__capability_list_feedback_pub.destroy()########## 不确定
        if self.new_cap_list_record is not None:
            return NodeMsg.SUCCEEDED
        else:
            return NodeMsg.FAILED
        

    def _do_shutdown(self):
        pass

    def _do_reset(self):
        return NodeMsg.IDLE

    def _do_untick(self):
        return NodeMsg.IDLE
    




@define_bt_node(
    NodeConfig(
        options={},
        inputs={"manager":str, "team_list":list},
        outputs={"symbol_value":bool},
        max_children=0,
        ))
class JoinTeamReceiver(Leaf):
    """Check the state of a symbol"""


    def receive_join_team_msg(self,msg):
        if msg is not None:
            self.team_list = msg.member_list
            self.center_name = msg.center_name
            self.depth = msg.depth
        else:
            pass

    def _do_setup(self):    
        
        
        
        #if self.depth >0:
        self.__join_team_pub = self.ros_node.create_publisher(
            JoinTeam,
            f"{self.ros_node.get_namespace()}/BehaviorTreeNode/join_team",   ### 不确定！！！！！ new manager还是manager
            qos_profile=QoSProfile(
                reliability=QoSReliabilityPolicy.RELIABLE,
                durability=QoSDurabilityPolicy.VOLATILE,
                history=QoSHistoryPolicy.KEEP_LAST,
                depth=10,),
            callback_group=ReentrantCallbackGroup()    ### change 0701
        )
        
    

        
        
    def _do_tick(self):     
        """Output the value of a symbol"""
        self.manager_name = self.inputs["manager"]
        self.depth = None
        self.center_name = None


        self.__join_team_sub = self.ros_node.create_subscription(
            JoinTeam,
            f"{self.manager_name}/BehaviorTreeNode/join_team",   ### 不确定！！！！！ new manager还是manager
            self.receive_join_team_msg,
            qos_profile=QoSProfile(
                reliability=QoSReliabilityPolicy.RELIABLE,
                durability=QoSDurabilityPolicy.VOLATILE,
                history=QoSHistoryPolicy.KEEP_LAST,
                depth=10,),
            callback_group=ReentrantCallbackGroup()    ### change 0701
        )

        if self.ros_node.get_parameter("center_symbol").value==True:
            self.depth = 0
            self.team_list = self.inputs["team_list"]
            self.__join_team_pub.publish(JoinTeam(center_name=self.ros_node.get_namespace(),member_list=self.team_list, depth=0))
            self.ros_node.get_logger().warn("Center Send the Join Team Msg!")
            
        
        try:
            waitiong_time_sum = 0
            while self.center_name is None:
                time.sleep(0.5)
                waitiong_time_sum = waitiong_time_sum+0.5
                self.ros_node.get_logger().warn("waiting for join team msg...")
                if waitiong_time_sum == 5:
                    self.ros_node.get_logger().warn("Got an another better team!")
                    return NodeMsg.FAILED
            if self.depth is not None:
            
                self.__join_team_pub.publish(
                JoinTeam(
                    member_list=self.team_list,
                    center_name=self.center_name,
                    depth=self.depth+1))
            self.ros_node.get_logger().info(f"Pass Join Team Message! Team: {self.team_list}")
            self.outputs["symbol_value"]=True
            set_param = self.ros_node.declare_parameter("join_symbol",True)

            #self.__join_team_pub.destroy()########## 不确定
        
            return NodeMsg.SUCCEEDED
        except BehaviorTreeException as exc:
            return NodeMsg.FAILED
        

    def _do_shutdown(self):
        pass

    def _do_reset(self):
        return NodeMsg.IDLE

    def _do_untick(self):
        return NodeMsg.IDLE
    



# @define_bt_node(NodeConfig(
#     options={"distance_limit":int},
#     inputs={},  
#     outputs={},
#     max_children=0,
#     ))
# class GetDistance(Leaf):##Leaf？
#     """Gets a location name from the queue"""

   
#     def _do_setup(self):
        
        
#         self.distance_limit = self.options["distance_limit"]
#         self.peer_name = peer_name

#         # 订阅对方位置
#         self.ros_node.create_subscription(
#             PoseStamped, f'/{peer_name}/pose', self.peer_pose_cb, 10)

#         # 订阅自己位置（也可用 tf，这里简单处理）
#         self.create_subscription(
#             PoseStamped, f'/{self.ros_node.get_namespace()}/pose', self.own_pose_cb, 10)
        
#         # 订阅对方位置
        

#         # 通信话题（距离内才发布）
#         self.in_range = self.ros_node.create_publisher(Bool, f'/{self.ros_node.get_namespace()}/to_{peer_name}', 10)

#         self.own_pos = None
#         self.peer_pos = None
#         self.timer = self.create_timer(0.1, self.check_distance)

#     @abstractmethod
#     def own_pose_cb(self, msg):
#         self.own_pos = msg.pose.position

#     @abstractmethod
#     def peer_pose_cb(self, msg):
#         self.peer_pos = msg.pose.position

#     @abstractmethod
#     def check_distance(self):
#         if self.own_pos is None or self.peer_pos is None:
#             return

#         dx = self.own_pos.x - self.peer_pos.x
#         dy = self.own_pos.y - self.peer_pos.y
#         dist = math.hypot(dx, dy)

#         if dist <= self.threshold:
#             # 发布通信消息（示例）
#             msg = Bool()
#             msg.data = f'Hello from {self.get_namespace()}'
#             self.pub.publish(msg)
#             self.get_logger().info_once(f'距离 {dist:.2f} m, 通信开启')
#         else:
#             self.get_logger().info_once(f'距离 {dist:.2f} m, 通信断开')
        
#         #self.input["get_msg"]=NodeData.set_updated("get_msg")
        
#     def _do_tick(self):##tick(self):     #update(self):
#         """Checks for the status of the navigation action"""
#         # If there is a result, we can check the status of the action directly.
#         # Otherwise, the action is still running.
        
        
#         #self.inputs.get_callback("get_msg")
#         #self.inputs.handle_subscriptions()
        
#         self.logwarn(self.inputs.is_updated("get_msg"))
#         self.logwarn(self.inputs["get_msg"])
#         self.outputs["target_color"] = 'blue'
#         self.outputs["next_target"] = 'red'
#         if self.inputs["get_msg"]==[]:
#             return NodeMsg.RUNNING
#         else:
#             if self.outputs["target_color"] is not None: #target_color is not None:
#                 self.logwarn(self.inputs["get_msg"])
#                 if len(self.inputs["get_msg"])<5:
#                     self.outputs["target_color"] = self.inputs["get_msg"]
#                 return NodeMsg.SUCCEEDED
#             else:
#                 return NodeMsg.FAILED
#     def _do_shutdown(self):
#         pass

#     def _do_reset(self):
#         return NodeMsg.IDLE

#     def _do_untick(self):
#         return NodeMsg.IDLE