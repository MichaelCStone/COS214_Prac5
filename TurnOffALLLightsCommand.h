#ifndef TURNOFFALLLIGHTSCOMMAND_H
#define TURNOFFALLLIGHTSCOMMAND_H

#include "Command.h"
#include "SmartDevice.h"

#include <string>
#include <vector>

class TurnOffAllLightsCommand : public Command 
{
    private:
        std::vector<SmartDevice*> lights;
        
    public:
        TurnOffAllLightsCommand(const std::vector<SmartDevice*>& lights);
        void execute() override;
};

#endif