#include <stdio.h>

int main(void)
{
	
	double cir_radius; 
	double cir_pi = 3.14;                //�� ������,���� ���� ����

	printf("Input cir_radius: ");     //�Է� �ȳ� �޼��� ���
	scanf_s("%lf", &cir_radius);      //�� ������ �Է�

	double cir_extent = cir_pi * cir_radius*cir_radius;     //�� ���� ���� ����
	printf("sq_extent:%.1lf", cir_extent);
	
	
	return 0;
}