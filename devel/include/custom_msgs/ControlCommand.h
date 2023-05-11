// Generated by gencpp from file custom_msgs/ControlCommand.msg
// DO NOT EDIT!


#ifndef CUSTOM_MSGS_MESSAGE_CONTROLCOMMAND_H
#define CUSTOM_MSGS_MESSAGE_CONTROLCOMMAND_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Quaternion.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>

namespace custom_msgs
{
template <class ContainerAllocator>
struct ControlCommand_
{
  typedef ControlCommand_<ContainerAllocator> Type;

  ControlCommand_()
    : header()
    , control_mode(0)
    , armed(false)
    , expected_execution_time()
    , orientation()
    , bodyrates()
    , angular_accelerations()
    , collective_thrust(0.0)
    , rotor_thrusts()  {
    }
  ControlCommand_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , control_mode(0)
    , armed(false)
    , expected_execution_time()
    , orientation(_alloc)
    , bodyrates(_alloc)
    , angular_accelerations(_alloc)
    , collective_thrust(0.0)
    , rotor_thrusts(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _control_mode_type;
  _control_mode_type control_mode;

   typedef uint8_t _armed_type;
  _armed_type armed;

   typedef ros::Time _expected_execution_time_type;
  _expected_execution_time_type expected_execution_time;

   typedef  ::geometry_msgs::Quaternion_<ContainerAllocator>  _orientation_type;
  _orientation_type orientation;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _bodyrates_type;
  _bodyrates_type bodyrates;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _angular_accelerations_type;
  _angular_accelerations_type angular_accelerations;

   typedef double _collective_thrust_type;
  _collective_thrust_type collective_thrust;

   typedef std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> _rotor_thrusts_type;
  _rotor_thrusts_type rotor_thrusts;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(NONE)
  #undef NONE
#endif
#if defined(_WIN32) && defined(ATTITUDE)
  #undef ATTITUDE
#endif
#if defined(_WIN32) && defined(BODY_RATES)
  #undef BODY_RATES
#endif
#if defined(_WIN32) && defined(ANGULAR_ACCELERATIONS)
  #undef ANGULAR_ACCELERATIONS
#endif
#if defined(_WIN32) && defined(ROTOR_THRUSTS)
  #undef ROTOR_THRUSTS
#endif

  enum {
    NONE = 0u,
    ATTITUDE = 1u,
    BODY_RATES = 2u,
    ANGULAR_ACCELERATIONS = 3u,
    ROTOR_THRUSTS = 4u,
  };


  typedef boost::shared_ptr< ::custom_msgs::ControlCommand_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::custom_msgs::ControlCommand_<ContainerAllocator> const> ConstPtr;

}; // struct ControlCommand_

typedef ::custom_msgs::ControlCommand_<std::allocator<void> > ControlCommand;

typedef boost::shared_ptr< ::custom_msgs::ControlCommand > ControlCommandPtr;
typedef boost::shared_ptr< ::custom_msgs::ControlCommand const> ControlCommandConstPtr;

// constants requiring out of line definition

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::custom_msgs::ControlCommand_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::custom_msgs::ControlCommand_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::custom_msgs::ControlCommand_<ContainerAllocator1> & lhs, const ::custom_msgs::ControlCommand_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.control_mode == rhs.control_mode &&
    lhs.armed == rhs.armed &&
    lhs.expected_execution_time == rhs.expected_execution_time &&
    lhs.orientation == rhs.orientation &&
    lhs.bodyrates == rhs.bodyrates &&
    lhs.angular_accelerations == rhs.angular_accelerations &&
    lhs.collective_thrust == rhs.collective_thrust &&
    lhs.rotor_thrusts == rhs.rotor_thrusts;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::custom_msgs::ControlCommand_<ContainerAllocator1> & lhs, const ::custom_msgs::ControlCommand_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace custom_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::custom_msgs::ControlCommand_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::custom_msgs::ControlCommand_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::custom_msgs::ControlCommand_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::custom_msgs::ControlCommand_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::custom_msgs::ControlCommand_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::custom_msgs::ControlCommand_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::custom_msgs::ControlCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a1918a34164f6647c898e4d55efbfcef";
  }

  static const char* value(const ::custom_msgs::ControlCommand_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa1918a34164f6647ULL;
  static const uint64_t static_value2 = 0xc898e4d55efbfcefULL;
};

template<class ContainerAllocator>
struct DataType< ::custom_msgs::ControlCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "custom_msgs/ControlCommand";
  }

  static const char* value(const ::custom_msgs::ControlCommand_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::custom_msgs::ControlCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Quadrotor control command\n"
"\n"
"# control mode enums\n"
"uint8 NONE=0\n"
"uint8 ATTITUDE=1\n"
"uint8 BODY_RATES=2\n"
"uint8 ANGULAR_ACCELERATIONS=3\n"
"uint8 ROTOR_THRUSTS=4\n"
"\n"
"Header header\n"
"\n"
"# Control mode as defined above\n"
"uint8 control_mode\n"
"\n"
"# Flag whether controller is allowed to arm\n"
"bool armed\n"
"\n"
"# Time at which this command should be executed\n"
"time expected_execution_time\n"
"\n"
"# Orientation of the body frame with respect to the world frame [-]\n"
"geometry_msgs/Quaternion orientation\n"
"\n"
"# Body rates in body frame [rad/s]\n"
"# Note that in ATTITUDE mode the x-y-bodyrates are only feed forward terms \n"
"# computed from a reference trajectory\n"
"# Also in ATTITUDE mode, the z-bodyrate has to be from feedback control\n"
"geometry_msgs/Vector3 bodyrates\n"
"\n"
"# Angular accelerations in body frame [rad/s^2]\n"
"geometry_msgs/Vector3 angular_accelerations\n"
"\n"
"# Collective mass normalized thrust [m/s^2]\n"
"float64 collective_thrust\n"
"\n"
"# Single rotor thrusts [N]\n"
"# These are only considered in the ROTOR_THRUSTS control mode\n"
"float64[] rotor_thrusts\n"
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
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::custom_msgs::ControlCommand_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::custom_msgs::ControlCommand_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.control_mode);
      stream.next(m.armed);
      stream.next(m.expected_execution_time);
      stream.next(m.orientation);
      stream.next(m.bodyrates);
      stream.next(m.angular_accelerations);
      stream.next(m.collective_thrust);
      stream.next(m.rotor_thrusts);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ControlCommand_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::custom_msgs::ControlCommand_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::custom_msgs::ControlCommand_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "control_mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.control_mode);
    s << indent << "armed: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.armed);
    s << indent << "expected_execution_time: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.expected_execution_time);
    s << indent << "orientation: ";
    s << std::endl;
    Printer< ::geometry_msgs::Quaternion_<ContainerAllocator> >::stream(s, indent + "  ", v.orientation);
    s << indent << "bodyrates: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.bodyrates);
    s << indent << "angular_accelerations: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.angular_accelerations);
    s << indent << "collective_thrust: ";
    Printer<double>::stream(s, indent + "  ", v.collective_thrust);
    s << indent << "rotor_thrusts[]" << std::endl;
    for (size_t i = 0; i < v.rotor_thrusts.size(); ++i)
    {
      s << indent << "  rotor_thrusts[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.rotor_thrusts[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // CUSTOM_MSGS_MESSAGE_CONTROLCOMMAND_H