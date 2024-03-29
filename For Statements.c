#pragma config(Hubs,  S1, HTMotor,  HTServo,  none,     none)
#pragma config(Sensor, S1,     ,               sensorI2CMuxController)
#pragma config(Motor,  mtr_S1_C1_1,     motorD,        tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C1_2,     motorE,        tmotorTetrix, openLoop, reversed)
#pragma config(Servo,  srvo_S1_C2_1,    servo1,               tServoStandard)
#pragma config(Servo,  srvo_S1_C2_2,    servo2,               tServoStandard)
#pragma config(Servo,  srvo_S1_C2_3,    servo3,               tServoStandard)
#pragma config(Servo,  srvo_S1_C2_4,    servo4,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_5,    servo5,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_6,    servo6,               tServoNone)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
int i;

for(i = 0; i < 4; i++)
	{
	motor[motorD] = 75;    //MotorA is powered at 50%.
	motor[motorE] = 75;    //MotorB is powered at 50%.

	wait1Msec(8000);        //Robot waits 5000 milliseconds.

	motor[motorE] = -75;   //MotorA is powered at 50% in reverse.
	motor[motorD] = 75;    //MotorB is powered at 50%.

	wait1Msec(1025);        //Robot waits 5000 milliseconds.
	}
	motor[motorD] = 0;     //MotorA is powered off.
	motor[motorE] = 0;     //MotorB is powered off.
}
