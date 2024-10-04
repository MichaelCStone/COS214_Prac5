#ifndef THERMOSTAT_H
#define THERMOSTAT_H

#include "SmartDevice.h"

class Thermostat : public SmartDevice 
{
    private:
        double temperature;

    public:
        Thermostat();
        std::string getStatus() const override;
        void performAction(const std::string& action) override;
        std::string getSmartDeviceType() const override;
};

#endif