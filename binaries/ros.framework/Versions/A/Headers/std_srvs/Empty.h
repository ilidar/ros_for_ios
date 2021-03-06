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
 * Auto-generated by gensrv_cpp from file /Users/furushchev/Development/ros_for_ios/ros/ros_comm/messages/std_srvs/srv/Empty.srv
 *
 */


#ifndef STD_SRVS_MESSAGE_EMPTY_H
#define STD_SRVS_MESSAGE_EMPTY_H

#include <ros/service_traits.h>


#include <std_srvs/EmptyRequest.h>
#include <std_srvs/EmptyResponse.h>


namespace std_srvs
{

struct Empty
{

typedef EmptyRequest Request;
typedef EmptyResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Empty
} // namespace std_srvs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::std_srvs::Empty > {
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::std_srvs::Empty&) { return value(); }
};

template<>
struct DataType< ::std_srvs::Empty > {
  static const char* value()
  {
    return "std_srvs/Empty";
  }

  static const char* value(const ::std_srvs::Empty&) { return value(); }
};


// service_traits::MD5Sum< ::std_srvs::EmptyRequest> should match 
// service_traits::MD5Sum< ::std_srvs::Empty > 
template<>
struct MD5Sum< ::std_srvs::EmptyRequest>
{
  static const char* value()
  {
    return MD5Sum< ::std_srvs::Empty >::value();
  }
  static const char* value(const ::std_srvs::EmptyRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::std_srvs::EmptyRequest> should match 
// service_traits::DataType< ::std_srvs::Empty > 
template<>
struct DataType< ::std_srvs::EmptyRequest>
{
  static const char* value()
  {
    return DataType< ::std_srvs::Empty >::value();
  }
  static const char* value(const ::std_srvs::EmptyRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::std_srvs::EmptyResponse> should match 
// service_traits::MD5Sum< ::std_srvs::Empty > 
template<>
struct MD5Sum< ::std_srvs::EmptyResponse>
{
  static const char* value()
  {
    return MD5Sum< ::std_srvs::Empty >::value();
  }
  static const char* value(const ::std_srvs::EmptyResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::std_srvs::EmptyResponse> should match 
// service_traits::DataType< ::std_srvs::Empty > 
template<>
struct DataType< ::std_srvs::EmptyResponse>
{
  static const char* value()
  {
    return DataType< ::std_srvs::Empty >::value();
  }
  static const char* value(const ::std_srvs::EmptyResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // STD_SRVS_MESSAGE_EMPTY_H
