#include <stdio.h>

int main(void)
{

	double sph_radius;                     
	double cir_pi = 3.14;                //�� ������,���� ���� ����

	printf("Input sph_radius: ");     //�Է� �ȳ� �޼��� ���
	scanf_s("%lf", &sph_radius);      //�� ������ �Է�

	double sph_surface = 4* cir_pi * sph_radius * sph_radius;                //�� �ѳ��� ���� ����
	double sph_volum = 4/3 * cir_pi * sph_radius * sph_radius * sph_radius;     //�� ���� ���� ����
	printf("sph_surface:%.1lf, sph_volum:%.1lf", sph_surface, sph_volum);


	return 0;
}