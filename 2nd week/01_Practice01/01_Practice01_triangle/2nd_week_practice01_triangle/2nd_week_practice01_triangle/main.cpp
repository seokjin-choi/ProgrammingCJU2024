#include <stdio.h>

int main(void)
{
	double tri_base_length;                     //삼각형 밑변 변수
	double tri_height;                          //삼각형 높이 변수
	

	printf("Input tri_base_length, tri_height:");               //입력 안내 메세지 출력
	scanf_s("%lf%lf", &tri_base_length, &tri_height);           //밑변, 높이 입력

	double tri_extent = tri_base_length * tri_height/2 ;        //삼각형 넓이 변수

	printf("tri_extent: %.1lfm^2 ",tri_extent);                 //입력값 출력
	return 0;
}