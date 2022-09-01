#pragma once
#include <AP_HAL/AP_HAL.h>

class AP_FuelLevel{
public:
    AP_FuelLevel();
    AP_FuelLevel(int16_t pin);
    float get_level();
private:
    AP_HAL::AnalogSource *source;
};
