#ifndef BASE_H
#define BASE_H

void runLeftBase(float voltPerc); //runs the left base at a percentage of max voltage from -100% to 100%
void runRightBase(float voltPerc); //runs the right base at a percentage of max voltage from -100% to 100%

void driveRight(int speed);
void driveLeft(int speed);

void driveVelocityRight(int rpm);
void driveVelocityLeft(int rpm);

void driveAbsRight(float distance, int maxSpeed);
void driveAbsLeft(float distance, int maxSpeed);

void driveRelativeRight(float distance, int maxSpeed);
void driveRelativeLeft(float distance, int maxSpeed);


void pvitChassis(int angle, int maxSpeed);

float getLeftChassisPosition();
float getRightChassisPosition();

extern float Pi;

float rotToIn(float Rotations);
float inToRot(float Inches);
float inToRotHS(float Inches);

void drivePD(float setPoint);

void resetBaseEncoderValue();


#endif