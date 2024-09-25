#include <stdio.h>

int main(void)

{
	double sq_base_length, sq_height;                //사각형 밑변,높이 변수 선언

	printf("Input sq_base_length, sq_height: ");     //입력 안내 메세지 출력
	scanf_s("%lf%lf", &sq_base_length, &sq_height);  //사각형 밑변,높이 입력

	double sq_extent=sq_base_length * sq_height;     //사각형 넓이 공식 선언
	printf("sq_extent:%.1lf", sq_extent);            //사각형 넓이
	return 0;
	
}