#include <stdio.h>

int main(void)
{
	double angle_pitch,angle_yaw,angle_roll;         //pitch, yaw, roll ���� ����
	double trans_angle_pitch,trans_angle_yaw,trans_angle_roll;  //��ȯ�� pitch,yaw, roll ����

	printf("Input the angle pitch:  yaw:  roll: ");    //pitch, yaw, roll �Է� �ȳ� �޼��� ��� 
	scanf_s("%lf %lf %lf", &angle_pitch,&angle_yaw,&angle_roll);  //pitch, yaw, roll �� �Է�

	trans_angle_pitch = -((int)angle_pitch + 90) % 360 + 180;  //pitch ��ȯ ����
	trans_angle_yaw = -((int)angle_yaw + 90) % 360 + 180;   //yaw ��ȯ ����
	trans_angle_roll = -((int)angle_roll + 90) % 360 + 180;   //roll ��ȯ ����
	printf("translated angle pitch:%.2lfdeg  yaw:%.2lfdeg  roll:%.2lfdeg", trans_angle_pitch,trans_angle_yaw,trans_angle_roll);  //��ȯ�� pitch, yaw, roll���� ���
	return 0;
}