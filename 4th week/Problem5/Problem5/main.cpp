#include<stdio.h>
#include<math.h>
double degree_to_radian(double degree);    //각도 변환 함수 선언
double degree_to_radian(double degree)     //각도 변환 함수 설정
{
	return (degree * 3.14) / 180;          //라디안 변환 식 
}

int main(void)
{
	double degree, radian,sin_res,cos_res;   //변수 선언 
	
	printf("Input the degree: ");            //각도 입력 안내문 출력
	scanf_s("%lf", &degree);                 //각도 입력

	radian = degree_to_radian(degree);       //각도 변환

	sin_res = sin(radian);                   //사인 값 계산
	cos_res = cos(radian);                   //코사인 값 계산

	printf("Sin(%.1lf) =%.3lf\n",degree, sin_res);    //사인값 계산
	printf("Cos(%.1lf) =%.3lf\n",degree, cos_res);    //코사인 계산
	
}