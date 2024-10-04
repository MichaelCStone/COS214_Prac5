#ifndef SETTEMPERATURECOMMAND_H
#define SETTEMPERATURECOMMAND_H

#include "SmartDevice.h"
#include "Command.h"

#include <vector>

class SetTemperatureCommand : public Command 
{
    private:
        std::vector<SmartDevice*> thermostats;
    public:
        SetTemperatureCommand(const std::vector<SmartDevice*>& thermostats);
        void execute() override;
};

#endif