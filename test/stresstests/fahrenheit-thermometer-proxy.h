
/*
 * This file was automatically generated by sdbus-c++-xml2cpp; DO NOT EDIT!
 */

#ifndef __sdbuscpp__fahrenheit_thermometer_proxy_h__proxy__H__
#define __sdbuscpp__fahrenheit_thermometer_proxy_h__proxy__H__

#include <sdbus-c++/sdbus-c++.h>
#include <string>
#include <tuple>

namespace org {
namespace sdbuscpp {
namespace stresstests {
namespace fahrenheit {

class thermometer_proxy
{
public:
    static constexpr const char* interfaceName = "org.sdbuscpp.stresstests.fahrenheit.thermometer";

protected:
    thermometer_proxy(sdbus::IObjectProxy& object)
        : object_(object)
    {
    }

public:
    uint32_t getCurrentTemperature()
    {
        uint32_t result;
        object_.callMethod("getCurrentTemperature").onInterface(interfaceName).storeResultsTo(result);
        return result;
    }

private:
    sdbus::IObjectProxy& object_;
};

}}}} // namespaces

namespace org {
namespace sdbuscpp {
namespace stresstests {
namespace fahrenheit {
namespace thermometer {

class factory_proxy
{
public:
    static constexpr const char* interfaceName = "org.sdbuscpp.stresstests.fahrenheit.thermometer.factory";

protected:
    factory_proxy(sdbus::IObjectProxy& object)
        : object_(object)
    {
    }

public:
    sdbus::ObjectPath createDelegateObject()
    {
        sdbus::ObjectPath result;
        object_.callMethod("createDelegateObject").onInterface(interfaceName).storeResultsTo(result);
        return result;
    }

    void destroyDelegateObject(const sdbus::ObjectPath& delegate)
    {
        object_.callMethod("destroyDelegateObject").onInterface(interfaceName).withArguments(delegate).dontExpectReply();
    }

private:
    sdbus::IObjectProxy& object_;
};

}}}}} // namespaces

#endif