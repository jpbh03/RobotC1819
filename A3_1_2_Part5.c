#pragma config(Sensor, in1,    lineFollower,   sensorLineFollower)
#pragma config(Sensor, in2,    potentioMeter,  sensorPotentiometer)
#pragma config(Sensor, in3,    lightSensor,    sensorReflection)
#pragma config(Sensor, dgtl1,  ,               sensorTouch)
#pragma config(Sensor, dgtl2,  ,               sensorTouch)
#pragma config(Sensor, dgtl12, green,          sensorLEDtoVCC)
#pragma config(Motor,  port2,           rightMotor,    tmotorVex269_MC29, openLoop)
#pragma config(Motor,  port3,           leftMotor,     tmotorVex269_MC29, openLoop)
#pragma config(Motor,  port9,           servoMotor,    tmotorServoStandard, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*
Project Title:
Team Members:
Date:
Section:


Task Description:


Pseudocode:

*/

task main()
{                                     //Program begins, insert code within curly braces
setServo(servoMotor, -127);
wait(2);
setServo(servoMotor, -63);
wait(3);
setServo(servoMotor, 0);
wait(2);
setServo(servoMotor, 63);
wait(3);
setServo(servoMotor, 127);
wait(2);
}
