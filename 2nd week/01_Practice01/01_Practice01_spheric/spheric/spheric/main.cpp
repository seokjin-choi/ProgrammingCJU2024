#include <stdio.h>

int main(void)
{

	double sph_radius;                     
	double cir_pi = 3.14;                //구 반지름,파이 변수 선언

	printf("Input sph_radius: ");     //입력 안내 메세지 출력
	scanf_s("%lf", &sph_radius);      //구 반지름 입력

	double sph_surface = 4* cir_pi * sph_radius * sph_radius;                //구 겉넓이 공식 선언
	double sph_volum = 4/3 * cir_pi * sph_radius * sph_radius * sph_radius;     //구 부피 공식 선언
	printf("sph_surface:%.1lf, sph_volum:%.1lf", sph_surface, sph_volum);


	return 0;
}