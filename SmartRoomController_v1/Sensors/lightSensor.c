#include "lightSensor.h"
#include "../HAL_I2C.h" //I2C communication drivers
#include "../HAL_OPT3001.h" //I2C communication drivers

//Starts the light sensor
void _lightSensorInit(void)
{
    Init_I2C_GPIO();
    I2C_init();
    OPT3001_init();
    __delay_cycles(100000);
}

//Gets the light intensity value
float getLux(){
    return OPT3001_getLux();
}
