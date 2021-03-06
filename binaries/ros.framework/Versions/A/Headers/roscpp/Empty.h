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
 * Auto-generated by gensrv_cpp from file /Users/furushchev/Development/ros_for_ios/ros/ros_comm/clients/roscpp/srv/Empty.srv
 *
 */


#ifndef ROSCPP_MESSAGE_EMPTY_H
#define ROSCPP_MESSAGE_EMPTY_H

#include <ros/service_traits.h>


#include <roscpp/EmptyRequest.h>
#include <roscpp/EmptyResponse.h>


namespace roscpp
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
} // namespace roscpp


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::roscpp::Empty > {
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::roscpp::Empty&) { return value(); }
};

template<>
struct DataType< ::roscpp::Empty > {
  static const char* value()
  {
    return "roscpp/Empty";
  }

  static const char* value(const ::roscpp::Empty&) { return value(); }
};


// service_traits::MD5Sum< ::roscpp::EmptyRequest> should match 
// service_traits::MD5Sum< ::roscpp::Empty > 
template<>
struct MD5Sum< ::roscpp::EmptyRequest>
{
  static const char* value()
  {
    return MD5Sum< ::roscpp::Empty >::value();
  }
  static const char* value(const ::roscpp::EmptyRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::roscpp::EmptyRequest> should match 
// service_traits::DataType< ::roscpp::Empty > 
template<>
struct DataType< ::roscpp::EmptyRequest>
{
  static const char* value()
  {
    return DataType< ::roscpp::Empty >::value();
  }
  static const char* value(const ::roscpp::EmptyRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::roscpp::EmptyResponse> should match 
// service_traits::MD5Sum< ::roscpp::Empty > 
template<>
struct MD5Sum< ::roscpp::EmptyResponse>
{
  static const char* value()
  {
    return MD5Sum< ::roscpp::Empty >::value();
  }
  static const char* value(const ::roscpp::EmptyResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::roscpp::EmptyResponse> should match 
// service_traits::DataType< ::roscpp::Empty > 
template<>
struct DataType< ::roscpp::EmptyResponse>
{
  static const char* value()
  {
    return DataType< ::roscpp::Empty >::value();
  }
  static const char* value(const ::roscpp::EmptyResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROSCPP_MESSAGE_EMPTY_H
