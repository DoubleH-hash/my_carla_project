// Generated by gencpp from file ys_ros_msgs/getLaneByIdResponse.msg
// DO NOT EDIT!


#ifndef YS_ROS_MSGS_MESSAGE_GETLANEBYIDRESPONSE_H
#define YS_ROS_MSGS_MESSAGE_GETLANEBYIDRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <ys_ros_msgs/Lane.h>

namespace ys_ros_msgs
{
template <class ContainerAllocator>
struct getLaneByIdResponse_
{
  typedef getLaneByIdResponse_<ContainerAllocator> Type;

  getLaneByIdResponse_()
    : lane()  {
    }
  getLaneByIdResponse_(const ContainerAllocator& _alloc)
    : lane(_alloc)  {
  (void)_alloc;
    }



   typedef  ::ys_ros_msgs::Lane_<ContainerAllocator>  _lane_type;
  _lane_type lane;





  typedef boost::shared_ptr< ::ys_ros_msgs::getLaneByIdResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ys_ros_msgs::getLaneByIdResponse_<ContainerAllocator> const> ConstPtr;

}; // struct getLaneByIdResponse_

typedef ::ys_ros_msgs::getLaneByIdResponse_<std::allocator<void> > getLaneByIdResponse;

typedef boost::shared_ptr< ::ys_ros_msgs::getLaneByIdResponse > getLaneByIdResponsePtr;
typedef boost::shared_ptr< ::ys_ros_msgs::getLaneByIdResponse const> getLaneByIdResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ys_ros_msgs::getLaneByIdResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ys_ros_msgs::getLaneByIdResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ys_ros_msgs::getLaneByIdResponse_<ContainerAllocator1> & lhs, const ::ys_ros_msgs::getLaneByIdResponse_<ContainerAllocator2> & rhs)
{
  return lhs.lane == rhs.lane;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ys_ros_msgs::getLaneByIdResponse_<ContainerAllocator1> & lhs, const ::ys_ros_msgs::getLaneByIdResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ys_ros_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ys_ros_msgs::getLaneByIdResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ys_ros_msgs::getLaneByIdResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ys_ros_msgs::getLaneByIdResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ys_ros_msgs::getLaneByIdResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ys_ros_msgs::getLaneByIdResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ys_ros_msgs::getLaneByIdResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ys_ros_msgs::getLaneByIdResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3a00a76d0e7d8edced9fb94bb2375d6b";
  }

  static const char* value(const ::ys_ros_msgs::getLaneByIdResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3a00a76d0e7d8edcULL;
  static const uint64_t static_value2 = 0xed9fb94bb2375d6bULL;
};

template<class ContainerAllocator>
struct DataType< ::ys_ros_msgs::getLaneByIdResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ys_ros_msgs/getLaneByIdResponse";
  }

  static const char* value(const ::ys_ros_msgs::getLaneByIdResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ys_ros_msgs::getLaneByIdResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Lane lane\n"
"\n"
"================================================================================\n"
"MSG: ys_ros_msgs/Lane\n"
"int32 point_num\n"
"PointXYA[] points\n"
"================================================================================\n"
"MSG: ys_ros_msgs/PointXYA\n"
"Header header\n"
"float64 x\n"
"float64 y\n"
"float64 yaw  # degs\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::ys_ros_msgs::getLaneByIdResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ys_ros_msgs::getLaneByIdResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.lane);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct getLaneByIdResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ys_ros_msgs::getLaneByIdResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ys_ros_msgs::getLaneByIdResponse_<ContainerAllocator>& v)
  {
    s << indent << "lane: ";
    s << std::endl;
    Printer< ::ys_ros_msgs::Lane_<ContainerAllocator> >::stream(s, indent + "  ", v.lane);
  }
};

} // namespace message_operations
} // namespace ros

#endif // YS_ROS_MSGS_MESSAGE_GETLANEBYIDRESPONSE_H