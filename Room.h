#ifndef ROOM_H
#define ROOM_H

#include "SmartDevice.h"
#include <vector>
#include <string>

class Room : public SmartDevice 
{
    private:
        std::string name;
        std::vector<SmartDevice*> smartDevices;

    public:
        Room(const std::string& name);
        void addDevice(SmartDevice* device);
        std::string getStatus() const override;
        // void performAction(const std::string& action) override;
        std::string getSmartDeviceType() const override;
};

#endif