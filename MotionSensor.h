#ifndef MOTIONSENSOR_H
#define MOTIONSENSOR_H

#include "Sensor.h"
#include "SmartDevice.h"

#include <vector>

//Concrete Subject
class MotionSensor : public Sensor 
{
    private:
        std::vector<SmartDevice*> devices;

    public:
        void addDevice(SmartDevice* device) override;
        void removeDevice(SmartDevice* device) override;
        void notifyDevices() override;
};

#endif