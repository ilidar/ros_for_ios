/* Software License Agreement (BSD License)
 *
 * Copyright (c) 2011, Willow Garage, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *  * Neither the name of Willow Garage, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Auto-generated by genmsg_cpp from file /Users/furushchev/Development/ros_for_ios/ros/common_msgs/sensor_msgs/msg/LaserEcho.msg
 *
 */


#ifndef SENSOR_MSGS_MESSAGE_LASERECHO_H
#define SENSOR_MSGS_MESSAGE_LASERECHO_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace sensor_msgs
{
template <class ContainerAllocator>
struct LaserEcho_
{
  typedef LaserEcho_<ContainerAllocator> Type;

  LaserEcho_()
    : echoes()  {
    }
  LaserEcho_(const ContainerAllocator& _alloc)
    : echoes(_alloc)  {
    }



   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _echoes_type;
  _echoes_type echoes;




  typedef boost::shared_ptr< ::sensor_msgs::LaserEcho_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sensor_msgs::LaserEcho_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

}; // struct LaserEcho_

typedef ::sensor_msgs::LaserEcho_<std::allocator<void> > LaserEcho;

typedef boost::shared_ptr< ::sensor_msgs::LaserEcho > LaserEchoPtr;
typedef boost::shared_ptr< ::sensor_msgs::LaserEcho const> LaserEchoConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sensor_msgs::LaserEcho_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sensor_msgs::LaserEcho_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace sensor_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/Users/furushchev/Development/ros_for_ios/ros/std_msgs/msg/'], 'sensor_msgs': ['/Users/furushchev/Development/ros_for_ios/ros/common_msgs/sensor_msgs/msg/'], 'geometry_msgs': ['/Users/furushchev/Development/ros_for_ios/ros/common_msgs/geometry_msgs/msg/']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::sensor_msgs::LaserEcho_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sensor_msgs::LaserEcho_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sensor_msgs::LaserEcho_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sensor_msgs::LaserEcho_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sensor_msgs::LaserEcho_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sensor_msgs::LaserEcho_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sensor_msgs::LaserEcho_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8bc5ae449b200fba4d552b4225586696";
  }

  static const char* value(const ::sensor_msgs::LaserEcho_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8bc5ae449b200fbaULL;
  static const uint64_t static_value2 = 0x4d552b4225586696ULL;
};

template<class ContainerAllocator>
struct DataType< ::sensor_msgs::LaserEcho_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sensor_msgs/LaserEcho";
  }

  static const char* value(const ::sensor_msgs::LaserEcho_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sensor_msgs::LaserEcho_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This message is a submessage of MultiEchoLaserScan and is not intended\n\
# to be used separately.\n\
\n\
float32[] echoes  # Multiple values of ranges or intensities.\n\
                  # Each array represents data from the same angle increment.\n\
";
  }

  static const char* value(const ::sensor_msgs::LaserEcho_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sensor_msgs::LaserEcho_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.echoes);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct LaserEcho_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sensor_msgs::LaserEcho_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sensor_msgs::LaserEcho_<ContainerAllocator>& v)
  {
    s << indent << "echoes[]" << std::endl;
    for (size_t i = 0; i < v.echoes.size(); ++i)
    {
      s << indent << "  echoes[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.echoes[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SENSOR_MSGS_MESSAGE_LASERECHO_H
