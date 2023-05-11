// Generated by gencpp from file custom_msgs/depthRecog.msg
// DO NOT EDIT!


#ifndef CUSTOM_MSGS_MESSAGE_DEPTHRECOG_H
#define CUSTOM_MSGS_MESSAGE_DEPTHRECOG_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Point.h>
#include <geometry_msgs/Point.h>

namespace custom_msgs
{
template <class ContainerAllocator>
struct depthRecog_
{
  typedef depthRecog_<ContainerAllocator> Type;

  depthRecog_()
    : header()
    , point()
    , vector()  {
    }
  depthRecog_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , point(_alloc)
    , vector(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _point_type;
  _point_type point;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _vector_type;
  _vector_type vector;





  typedef boost::shared_ptr< ::custom_msgs::depthRecog_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::custom_msgs::depthRecog_<ContainerAllocator> const> ConstPtr;

}; // struct depthRecog_

typedef ::custom_msgs::depthRecog_<std::allocator<void> > depthRecog;

typedef boost::shared_ptr< ::custom_msgs::depthRecog > depthRecogPtr;
typedef boost::shared_ptr< ::custom_msgs::depthRecog const> depthRecogConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::custom_msgs::depthRecog_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::custom_msgs::depthRecog_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::custom_msgs::depthRecog_<ContainerAllocator1> & lhs, const ::custom_msgs::depthRecog_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.point == rhs.point &&
    lhs.vector == rhs.vector;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::custom_msgs::depthRecog_<ContainerAllocator1> & lhs, const ::custom_msgs::depthRecog_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace custom_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::custom_msgs::depthRecog_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::custom_msgs::depthRecog_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::custom_msgs::depthRecog_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::custom_msgs::depthRecog_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::custom_msgs::depthRecog_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::custom_msgs::depthRecog_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::custom_msgs::depthRecog_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b4d4e89e36c63a48672ef02dabdec610";
  }

  static const char* value(const ::custom_msgs::depthRecog_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb4d4e89e36c63a48ULL;
  static const uint64_t static_value2 = 0x672ef02dabdec610ULL;
};

template<class ContainerAllocator>
struct DataType< ::custom_msgs::depthRecog_<ContainerAllocator> >
{
  static const char* value()
  {
    return "custom_msgs/depthRecog";
  }

  static const char* value(const ::custom_msgs::depthRecog_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::custom_msgs::depthRecog_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n"
"\n"
"geometry_msgs/Point point\n"
"geometry_msgs/Point vector\n"
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

  static const char* value(const ::custom_msgs::depthRecog_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::custom_msgs::depthRecog_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.point);
      stream.next(m.vector);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct depthRecog_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::custom_msgs::depthRecog_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::custom_msgs::depthRecog_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "point: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.point);
    s << indent << "vector: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.vector);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CUSTOM_MSGS_MESSAGE_DEPTHRECOG_H
