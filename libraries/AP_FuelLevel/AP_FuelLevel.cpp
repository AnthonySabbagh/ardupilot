#include <AP_FuelLevel/AP_FuelLevel.h>
/*const AP_Param::GroupInfo AP_FuelLevel::var_info[] = {
    // @Param: VOLTAGE_OFFSET
    // @DisplayName: Fuel sensor voltage offset
    // @Description: Calibrates fuel sensor
    // @Range: -5 5
    // @User: Advanced
    AP_GROUPINFO("VOLTAGE_OFFSET", 0, AP_FuelLevel, _offset, 0),

    // @Param: VOLTAGE_SCALAR
    // @DisplayName: Fuel sensor voltage scalar
    // @Description: Calibrates fuel sensor
    // @Range: -32768 32768
    // @User: Advanced
    AP_GROUPINFO("VOLTAGE_SCALAR", 1, AP_FuelLevel, _scalar, 1),

    AP_GROUPEND
};*/

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
