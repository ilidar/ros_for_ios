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
 * Auto-generated by genmsg_cpp from file /Users/furushchev/Development/ros_for_ios/ros/ros_comm/clients/roscpp/srv/GetLoggers.srv
 *
 */


#ifndef ROSCPP_MESSAGE_GETLOGGERSRESPONSE_H
#define ROSCPP_MESSAGE_GETLOGGERSRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <roscpp/Logger.h>

namespace roscpp
{
template <class ContainerAllocator>
struct GetLoggersResponse_
{
  typedef GetLoggersResponse_<ContainerAllocator> Type;

  GetLoggersResponse_()
    : loggers()  {
    }
  GetLoggersResponse_(const ContainerAllocator& _alloc)
    : loggers(_alloc)  {
    }



   typedef std::vector< ::roscpp::Logger_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::roscpp::Logger_<ContainerAllocator> >::other >  _loggers_type;
  _loggers_type loggers;




  typedef boost::shared_ptr< ::roscpp::GetLoggersResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::roscpp::GetLoggersResponse_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

}; // struct GetLoggersResponse_

typedef ::roscpp::GetLoggersResponse_<std::allocator<void> > GetLoggersResponse;

typedef boost::shared_ptr< ::roscpp::GetLoggersResponse > GetLoggersResponsePtr;
typedef boost::shared_ptr< ::roscpp::GetLoggersResponse const> GetLoggersResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::roscpp::GetLoggersResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::roscpp::GetLoggersResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace roscpp

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'roscpp': ['/Users/furushchev/Development/ros_for_ios/ros/ros_comm/clients/roscpp/msg/']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::roscpp::GetLoggersResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::roscpp::GetLoggersResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roscpp::GetLoggersResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roscpp::GetLoggersResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roscpp::GetLoggersResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roscpp::GetLoggersResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::roscpp::GetLoggersResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "32e97e85527d4678a8f9279894bb64b0";
  }

  static const char* value(const ::roscpp::GetLoggersResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x32e97e85527d4678ULL;
  static const uint64_t static_value2 = 0xa8f9279894bb64b0ULL;
};

template<class ContainerAllocator>
struct DataType< ::roscpp::GetLoggersResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "roscpp/GetLoggersResponse";
  }

  static const char* value(const ::roscpp::GetLoggersResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::roscpp::GetLoggersResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Logger[] loggers\n\
\n\
================================================================================\n\
MSG: roscpp/Logger\n\
string name\n\
string level\n\
";
  }

  static const char* value(const ::roscpp::GetLoggersResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::roscpp::GetLoggersResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.loggers);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct GetLoggersResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::roscpp::GetLoggersResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::roscpp::GetLoggersResponse_<ContainerAllocator>& v)
  {
    s << indent << "loggers[]" << std::endl;
    for (size_t i = 0; i < v.loggers.size(); ++i)
    {
      s << indent << "  loggers[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::roscpp::Logger_<ContainerAllocator> >::stream(s, indent + "    ", v.loggers[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROSCPP_MESSAGE_GETLOGGERSRESPONSE_H
