#ifndef SENSOR_H
#define SENSOR_H

#include "SmartDevice.h"
#include <vector>

//Subject
class Sensor 
{
    public:
        virtual ~Sensor() {}
        virtual void addDevice(SmartDevice* device) = 0;
        virtual void removeDevice(SmartDevice* device) = 0;
        virtual void notifyDevices() = 0;
};

#endif