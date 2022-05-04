#include "LinearRail.h"


#define DEBUG Serial

void setup(){
    Serial.begin(9600);
    LinearRail lr(uint8_t(6), uint8_t(11), uint8_t(10), uint8_t(3));
    lr.dispense_by_day(3);
}   

void loop(){
 

}