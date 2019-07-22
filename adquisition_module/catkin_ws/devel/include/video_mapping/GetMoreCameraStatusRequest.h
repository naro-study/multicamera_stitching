// Generated by gencpp from file video_mapping/GetMoreCameraStatusRequest.msg
// DO NOT EDIT!


#ifndef VIDEO_MAPPING_MESSAGE_GETMORECAMERASTATUSREQUEST_H
#define VIDEO_MAPPING_MESSAGE_GETMORECAMERASTATUSREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace video_mapping
{
template <class ContainerAllocator>
struct GetMoreCameraStatusRequest_
{
  typedef GetMoreCameraStatusRequest_<ContainerAllocator> Type;

  GetMoreCameraStatusRequest_()
    {
    }
  GetMoreCameraStatusRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::video_mapping::GetMoreCameraStatusRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::video_mapping::GetMoreCameraStatusRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetMoreCameraStatusRequest_

typedef ::video_mapping::GetMoreCameraStatusRequest_<std::allocator<void> > GetMoreCameraStatusRequest;

typedef boost::shared_ptr< ::video_mapping::GetMoreCameraStatusRequest > GetMoreCameraStatusRequestPtr;
typedef boost::shared_ptr< ::video_mapping::GetMoreCameraStatusRequest const> GetMoreCameraStatusRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::video_mapping::GetMoreCameraStatusRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::video_mapping::GetMoreCameraStatusRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace video_mapping

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'video_mapping': ['/home/overcode/multicamera_stitching/adquisition_module/catkin_ws/src/video_mapping/msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::video_mapping::GetMoreCameraStatusRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::video_mapping::GetMoreCameraStatusRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::video_mapping::GetMoreCameraStatusRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::video_mapping::GetMoreCameraStatusRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::video_mapping::GetMoreCameraStatusRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::video_mapping::GetMoreCameraStatusRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::video_mapping::GetMoreCameraStatusRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::video_mapping::GetMoreCameraStatusRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::video_mapping::GetMoreCameraStatusRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "video_mapping/GetMoreCameraStatusRequest";
  }

  static const char* value(const ::video_mapping::GetMoreCameraStatusRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::video_mapping::GetMoreCameraStatusRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
;
  }

  static const char* value(const ::video_mapping::GetMoreCameraStatusRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::video_mapping::GetMoreCameraStatusRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetMoreCameraStatusRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::video_mapping::GetMoreCameraStatusRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::video_mapping::GetMoreCameraStatusRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // VIDEO_MAPPING_MESSAGE_GETMORECAMERASTATUSREQUEST_H
