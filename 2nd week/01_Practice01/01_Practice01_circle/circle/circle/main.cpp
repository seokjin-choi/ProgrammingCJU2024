#include <stdio.h>

int main(void)
{
	
	double cir_radius; 
	double cir_pi = 3.14;                //원 반지름,파이 변수 선언

	printf("Input cir_radius: ");     //입력 안내 메세지 출력
	scanf_s("%lf", &cir_radius);      //원 반지름 입력

	double cir_extent = cir_pi * cir_radius*cir_radius;     //원 넓이 공식 선언
	printf("cir_extent:%.1lfm^2", cir_extent);
	
	
	return 0;
}