// Generated by gencpp from file custom_msgs/ParkingRecog.msg
// DO NOT EDIT!


#ifndef CUSTOM_MSGS_MESSAGE_PARKINGRECOG_H
#define CUSTOM_MSGS_MESSAGE_PARKINGRECOG_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Point.h>

namespace custom_msgs
{
template <class ContainerAllocator>
struct ParkingRecog_
{
  typedef ParkingRecog_<ContainerAllocator> Type;

  ParkingRecog_()
    : header()
    , point()  {
    }
  ParkingRecog_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , point(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _point_type;
  _point_type point;





  typedef boost::shared_ptr< ::custom_msgs::ParkingRecog_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::custom_msgs::ParkingRecog_<ContainerAllocator> const> ConstPtr;

}; // struct ParkingRecog_

typedef ::custom_msgs::ParkingRecog_<std::allocator<void> > ParkingRecog;

typedef boost::shared_ptr< ::custom_msgs::ParkingRecog > ParkingRecogPtr;
typedef boost::shared_ptr< ::custom_msgs::ParkingRecog const> ParkingRecogConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::custom_msgs::ParkingRecog_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::custom_msgs::ParkingRecog_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::custom_msgs::ParkingRecog_<ContainerAllocator1> & lhs, const ::custom_msgs::ParkingRecog_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.point == rhs.point;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::custom_msgs::ParkingRecog_<ContainerAllocator1> & lhs, const ::custom_msgs::ParkingRecog_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace custom_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::custom_msgs::ParkingRecog_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::custom_msgs::ParkingRecog_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::custom_msgs::ParkingRecog_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::custom_msgs::ParkingRecog_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::custom_msgs::ParkingRecog_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::custom_msgs::ParkingRecog_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::custom_msgs::ParkingRecog_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c63aecb41bfdfd6b7e1fac37c7cbe7bf";
  }

  static const char* value(const ::custom_msgs::ParkingRecog_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc63aecb41bfdfd6bULL;
  static const uint64_t static_value2 = 0x7e1fac37c7cbe7bfULL;
};

template<class ContainerAllocator>
struct DataType< ::custom_msgs::ParkingRecog_<ContainerAllocator> >
{
  static const char* value()
  {
    return "custom_msgs/ParkingRecog";
  }

  static const char* value(const ::custom_msgs::ParkingRecog_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::custom_msgs::ParkingRecog_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n"
"\n"
"geometry_msgs/Point point\n"
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
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::custom_msgs::ParkingRecog_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::custom_msgs::ParkingRecog_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.point);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ParkingRecog_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::custom_msgs::ParkingRecog_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::custom_msgs::ParkingRecog_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "point: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.point);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CUSTOM_MSGS_MESSAGE_PARKINGRECOG_H
