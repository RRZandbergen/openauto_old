include <aasdk_proto/DrivingStatusEnum.pb.h>
#include <f1x/openauto/Common/Log.hpp>
#include <f1x/openauto/autoapp/Service/SensorService.hpp>

namespace f1x
{
namespace openauto
{
namespace autoapp
{
namespace service
{

SensorMonitor::SensorMonitor(boost::asio::io_service& ioService, aasdk::messenger::IMessenger::Pointer messenger)
    : strand_(ioService)
    , channel_(std::make_shared<aasdk::channel::sensor::SensorServiceChannel>(strand_, std::move(messenger)))
{

}

SensorMonitor::Start()
{
    
}
