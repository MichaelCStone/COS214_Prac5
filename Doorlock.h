#ifndef DOORLOCK_H
#define DOORLOCK_H

#include "SmartDevice.h"

class DoorLock : public SmartDevice 
{
    private:
        bool isLocked;

    public:
        DoorLock();
        std::string getStatus() const override;
        // void performAction(const std::string& action) override;
        std::string getSmartDeviceType() const override;
};

#endif