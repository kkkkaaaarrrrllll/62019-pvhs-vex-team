#include "main.h"

void blueCap() {

    transPstn.set_value(1);
    runIntake(80);
    moveStraight(1800, 1, 2000);
    moveStraight(800, -1, 1000);
    pvtBase(90, 2000);
    moveStraight(780, 1, 800);
    pvtBase(-80, 1200);
    runIntake(-100);
    moveStraight(970, 1, 1000);
    moveStraight(400, -1, 800);
    pvtBase(-110, 2000);
    runIntake(0);
    moveStraight(1200, 1, 1000);

}