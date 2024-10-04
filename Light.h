#ifndef LIGHT_H
#define LIGHT_H

#include "SmartDevice.h"
#include <string>

class Light : public SmartDevice
{
    private:
        bool isOn;

    public:
        Light();
        std::string getStatus() const override;
        // void performAction(const std::string &action) override;
        std::string getSmartDeviceType() const override;
};

#endif