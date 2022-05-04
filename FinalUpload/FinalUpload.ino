#include "PillDispenser.h"
#include "SerialHandler.h"

#define DEBUG Serial

void setup(){

    PillDispenser pd(
            //rail_step_pin
            10,

            //rail_dir_pin
            11,

            //flap_pin
            6,

            //ir_pin
            19,

            //disk_pin
            12,

            //disk_dir_pin
            13,

            //actuator_pin
            8,

            //actuator_dir_pin
            9,

            //speaker_pin
            5,

            //rail_limit_switch
            3,
            
            //actuator_limit_switch
            2
    );
    pd.dispense_pills();
}   

void loop(){
 

}