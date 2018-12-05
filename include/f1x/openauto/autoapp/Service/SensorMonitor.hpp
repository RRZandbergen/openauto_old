#pragma once

#include <f1x/aasdk/USB/IUSBHub.hpp>
#include <f1x/aasdk/USB/IConnectedAccessoriesEnumerator.hpp>
#include <f1x/aasdk/USB/USBWrapper.hpp>
#include <f1x/aasdk/TCP/ITCPWrapper.hpp>
#include <f1x/aasdk/TCP/ITCPEndpoint.hpp>
#include <f1x/openauto/autoapp/Service/IAndroidAutoEntityEventHandler.hpp>
#include <f1x/openauto/autoapp/Service/IAndroidAutoEntityFactory.hpp>
#include <fstream>
namespace f1x
{
namespace openauto
{
namespace autoapp
{

class SensorMonitor<SensorMonitor>
{
	public:
    		typedef std::shared_ptr<SensorMonitor> Pointer;
		SensorMonitor(boost::asio::io_service& ioService, aasdk::messenger::IMessenger::Pointer messenger);
		Start();
}
