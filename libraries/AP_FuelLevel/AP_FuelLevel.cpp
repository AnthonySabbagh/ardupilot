#include <AP_FuelLevel/AP_FuelLevel.h>

extern const AP_HAL::HAL& hal;

AP_FuelLevel::AP_FuelLevel(int16_t pin){
    source = hal.analogin->channel(pin);
}

float AP_FuelLevel::get_level(){
    float level;
    if (source){
        //level = _scalar * (source->voltage_average() + _offset);
        level = source->voltage_average();
    }
    else{
        level = -1;
    }
    return level;
}
