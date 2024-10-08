#include <stdio.h>

int main(void)
{
	double angle_pitch,angle_yaw,angle_roll;         //pitch, yaw, roll 변수 선언
	double trans_angle_pitch,trans_angle_yaw,trans_angle_roll;  //변환된 pitch,yaw, roll 선언

	printf("Input the angle pitch:  yaw:  roll: ");    //pitch, yaw, roll 입력 안내 메세지 출력 
	scanf_s("%lf %lf %lf", &angle_pitch,&angle_yaw,&angle_roll);  //pitch, yaw, roll 값 입력

	trans_angle_pitch = -((int)angle_pitch + 90) % 360 + 180;  //pitch 변환 공식
	trans_angle_yaw = -((int)angle_yaw + 90) % 360 + 180;   //yaw 변환 공식
	trans_angle_roll = -((int)angle_roll + 90) % 360 + 180;   //roll 변환 공식
	printf("translated angle pitch:%.2lfdeg  yaw:%.2lfdeg  roll:%.2lfdeg", trans_angle_pitch,trans_angle_yaw,trans_angle_roll);  //변환된 pitch, yaw, roll값들 출력
	return 0;
}