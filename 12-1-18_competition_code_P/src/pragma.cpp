#include "main.h"

Motor leftChassis1(1, MOTOR_GEARSET_18, 0, MOTOR_ENCODER_ROTATIONS);
Motor leftChassis2(2, MOTOR_GEARSET_18, 1, MOTOR_ENCODER_ROTATIONS);
Motor rightChassis1(3, MOTOR_GEARSET_18, 1, MOTOR_ENCODER_ROTATIONS);
Motor rightChassis2(4, MOTOR_GEARSET_18, 0, MOTOR_ENCODER_ROTATIONS);
Motor intake(5, MOTOR_GEARSET_18, 0, MOTOR_ENCODER_ROTATIONS);
Motor catapult(6, MOTOR_GEARSET_18, 0, MOTOR_ENCODER_ROTATIONS);

Vision catapultEye(7, E_VISION_ZERO_CENTER);

ADIDigitalOut intakePiston1(1);
ADIDigitalOut intakePiston2(2);
ADIDigitalOut chassisTransmissionPiston(3);
ADIDigitalIn is_cap(4);
ADIDigitalIn catabut(5);

Controller master(E_CONTROLLER_MASTER);
Controller partner(E_CONTROLLER_PARTNER);