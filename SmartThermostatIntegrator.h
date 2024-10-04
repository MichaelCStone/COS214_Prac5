#ifndef SMARTTHERMOSTATINTEGRATOR_H
#define SMARTTHERMOSTATINTEGRATOR_H

#include "SmartDevice.h"
#include "LegacyThermostat.h"

#include <string>

class SmartThermostatIntegrator : public SmartDevice 
{
    private:
        LegacyThermostat* legacyThermostat;

    public:
        SmartThermostatIntegrator(SmartThermostatIntegrator* thermostat);
        std::string getStatus() const override;
        // void performAction(const std::string& action) override;
        std::string getSmartDeviceType() const override;
};

#endif