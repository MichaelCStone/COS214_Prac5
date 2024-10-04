#ifndef LEGACYTHERMOSTAT_h
#define legacythermostat_h

//adaptee
class LegacyThermostat 
{
    public:
        LegacyThermostat();
        void setTemperature(int temp);
        int getTemperature() const;
};

#endif