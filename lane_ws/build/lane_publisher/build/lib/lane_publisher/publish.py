import rclpy
from numpy import NaN
from rclpy.node import Node
from custom_messages.msg import AllLanes, ParentMessage, Lanetype, Laneid, Lanemarkings

class MyNode(Node):
    def __init__(self):
        super().__init__('my_node')
        self.publisher_ = self.create_publisher(AllLanes, 'lane_topic', 10)
        self.timer_ = self.create_timer(1.0, self.timer_callback)
        self.count = 0

    def timer_callback(self):
        allLanes = AllLanes()
        laneFromPerception1 = [0,'yellow','solid']
        laneFromPerception2 = [1,'white' , 'dashed']
        laneFromPerception3 = [2, 'white', 'solid']
        laneFromPerception4 = NaN
        laneArray = [laneFromPerception1, laneFromPerception2, laneFromPerception3, laneFromPerception4]
        for n in (laneArray):
                lane = ParentMessage()
                laneID =Laneid()
                laneMarkings = Lanemarkings()
                laneType = Lanetype()
                if n is NaN:
                        laneID.laneid_data = -1
                        laneMarkings.lanemarkings_data = 'no lane'
                        laneType.lanetype_name = 'no lane'
                else:
                        laneID.laneid_data = n[0]
                        laneMarkings.lanemarkings_data = n[1]
                        laneType.lanetype_name = n[2]
                lane.laneid_field = laneID
                lane.lanetype_field = laneType
                lane.lanemarkings_field = laneMarkings
                allLanes.lanes.append(lane)
        self.publisher_.publish(allLanes)
        self.get_logger().info('Publishing: %s' % allLanes)

def main(args=None):
    rclpy.init(args=args)
    node = MyNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
