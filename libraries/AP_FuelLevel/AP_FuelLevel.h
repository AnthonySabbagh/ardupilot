#pragma once
#include <AP_HAL/AP_HAL.h>
//#include <AP_Param/AP_Param.h>

class AP_FuelLevel{
public:
    AP_FuelLevel();
    AP_FuelLevel(int16_t pin);
    float get_level();
//    static const struct AP_Param::GroupInfo var_info[];
private:
    AP_HAL::AnalogSource *source;
 //   AP_Float _offset;
   // AP_Float _scalar;
};
