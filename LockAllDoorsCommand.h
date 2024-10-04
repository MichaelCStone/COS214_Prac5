#ifndef LOCKALLDOORSCOMMAND_H
#define LOCKALLDOORSCOMMAND_H

#include "SmartDevice.h"
#include "Command.h"

#include <vector>

class LockAllDoorsCommand : public Command 
{
private:
    std::vector<SmartDevice*> doors;
public:
    LockAllDoorsCommand(const std::vector<SmartDevice*>& doors);
    void execute() override;
};

#endif