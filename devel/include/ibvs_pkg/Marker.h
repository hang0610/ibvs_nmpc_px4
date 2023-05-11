// Generated by gencpp from file ibvs_pkg/Marker.msg
// DO NOT EDIT!


#ifndef IBVS_PKG_MESSAGE_MARKER_H
#define IBVS_PKG_MESSAGE_MARKER_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace ibvs_pkg
{
template <class ContainerAllocator>
struct Marker_
{
  typedef Marker_<ContainerAllocator> Type;

  Marker_()
    : header()
    , marker_desired_x()
    , marker_current_x()
    , marker_current_y()
    , marker_desired_y()  {
    }
  Marker_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , marker_desired_x(_alloc)
    , marker_current_x(_alloc)
    , marker_current_y(_alloc)
    , marker_desired_y(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> _marker_desired_x_type;
  _marker_desired_x_type marker_desired_x;

   typedef std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> _marker_current_x_type;
  _marker_current_x_type marker_current_x;

   typedef std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> _marker_current_y_type;
  _marker_current_y_type marker_current_y;

   typedef std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> _marker_desired_y_type;
  _marker_desired_y_type marker_desired_y;





  typedef boost::shared_ptr< ::ibvs_pkg::Marker_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ibvs_pkg::Marker_<ContainerAllocator> const> ConstPtr;

}; // struct Marker_

typedef ::ibvs_pkg::Marker_<std::allocator<void> > Marker;

typedef boost::shared_ptr< ::ibvs_pkg::Marker > MarkerPtr;
typedef boost::shared_ptr< ::ibvs_pkg::Marker const> MarkerConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ibvs_pkg::Marker_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ibvs_pkg::Marker_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ibvs_pkg::Marker_<ContainerAllocator1> & lhs, const ::ibvs_pkg::Marker_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.marker_desired_x == rhs.marker_desired_x &&
    lhs.marker_current_x == rhs.marker_current_x &&
    lhs.marker_current_y == rhs.marker_current_y &&
    lhs.marker_desired_y == rhs.marker_desired_y;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ibvs_pkg::Marker_<ContainerAllocator1> & lhs, const ::ibvs_pkg::Marker_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ibvs_pkg

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ibvs_pkg::Marker_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ibvs_pkg::Marker_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ibvs_pkg::Marker_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ibvs_pkg::Marker_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ibvs_pkg::Marker_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ibvs_pkg::Marker_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ibvs_pkg::Marker_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ac084a991c16309650259dd1961a407b";
  }

  static const char* value(const ::ibvs_pkg::Marker_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xac084a991c163096ULL;
  static const uint64_t static_value2 = 0x50259dd1961a407bULL;
};

template<class ContainerAllocator>
struct DataType< ::ibvs_pkg::Marker_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ibvs_pkg/Marker";
  }

  static const char* value(const ::ibvs_pkg::Marker_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ibvs_pkg::Marker_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n"
"\n"
"int32[] marker_desired_x\n"
"int32[] marker_current_x\n"
"int32[] marker_current_y\n"
"int32[] marker_desired_y\n"
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

  static const char* value(const ::ibvs_pkg::Marker_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ibvs_pkg::Marker_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.marker_desired_x);
      stream.next(m.marker_current_x);
      stream.next(m.marker_current_y);
      stream.next(m.marker_desired_y);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Marker_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ibvs_pkg::Marker_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ibvs_pkg::Marker_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "marker_desired_x[]" << std::endl;
    for (size_t i = 0; i < v.marker_desired_x.size(); ++i)
    {
      s << indent << "  marker_desired_x[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.marker_desired_x[i]);
    }
    s << indent << "marker_current_x[]" << std::endl;
    for (size_t i = 0; i < v.marker_current_x.size(); ++i)
    {
      s << indent << "  marker_current_x[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.marker_current_x[i]);
    }
    s << indent << "marker_current_y[]" << std::endl;
    for (size_t i = 0; i < v.marker_current_y.size(); ++i)
    {
      s << indent << "  marker_current_y[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.marker_current_y[i]);
    }
    s << indent << "marker_desired_y[]" << std::endl;
    for (size_t i = 0; i < v.marker_desired_y.size(); ++i)
    {
      s << indent << "  marker_desired_y[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.marker_desired_y[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // IBVS_PKG_MESSAGE_MARKER_H
