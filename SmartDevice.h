#ifndef SMARTDEVICE_H
#define SMARTDEVICE_H

#include <string>

//Observer for component 4
class SmartDevice 
{
    public:
        virtual ~SmartDevice() {}
        virtual std::string getStatus() const = 0;
        // virtual void performAction(const std::string& action) = 0;
        virtual std::string getSmartDeviceType() const = 0;
};

#endif