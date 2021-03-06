#pragma config(Hubs,  S1, HTMotor,  none,     none,     none)
#pragma config(Sensor, S1,     ,               sensorI2CMuxController)
#pragma config(Motor,  mtr_S1_C1_1,     motorD,        tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C1_2,     motorE,        tmotorTetrix, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#include "JoystickDriver.c"

void initializeRobot(){
		motor[motorD] = 0;
		motor[motorE] = 0;
}

task main()
{
	initializeRobot();
	while (true){
		getJoystickSettings(joystick);
		motor[motorD] = joystick.joy1_y2;
		motor[motorE] = joystick.joy1_y1;
	}
}
