#include "main.h" //DO NOT TOUCH
#include <fstream>

//Runs during the 15 second autonomous period
void autonomous() {

    switch(autonCount) {

        case 0:
            std::ifstream autonFile (".\autons\testAuton.txt");
            break;

    }

    for(int i = 0; i < 15000; i++) {

        if((i % 100) == 0) {

            

        }

        delay(1);

    }
    
}