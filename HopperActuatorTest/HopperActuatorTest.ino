#include "HopperActuator.h"
#include "Arduino.h"

#define DEBUG Serial

void setup(){
    Serial.begin(9600);
    HopperActuator ha(uint8_t(8), uint8_t(9));
    ha.set_level(uint8_t(5));
    delay(1000);
    ha.reset_arm();
}   

void loop(){
 

}