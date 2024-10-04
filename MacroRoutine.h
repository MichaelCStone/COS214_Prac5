#ifndef MACROROUTINE_H
#define MACROROUTINE_H

#include "Command.h"

#include <vector>

class MacroRoutine : public Command 
{
    private:
        std::vector<Command*> commands;
    public:
        void addProcedure(Command* command);
        void removeProcedure(Command* command);
        void execute() override;
};

#endif