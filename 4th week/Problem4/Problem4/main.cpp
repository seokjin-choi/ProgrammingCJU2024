#include<stdio.h>

double celsius_to_fahren(double temp);   //함수 선언(섭씨 to 화씨)
double fahren_to_celsius(double temp);   //함수 선언(화씨 to 섭씨)

int main(void)
{

	double temp, converted_temp;         //온도, 변환된 온도 변수 선언
	char unit;                           //기호 선언

	printf("Input the temperature: ");   //온도 입력 안내문 출력
	scanf_s("%lf%c", &temp, &unit, sizeof(unit));    //온도, 기호 입력

	switch (unit)
	{
	case 'F':                            //화씨일 때
	{
		converted_temp = fahren_to_celsius(temp);            //화씨 to 섭씨 함수 불러오기
		printf("The converted temperature is %.1fC", converted_temp);    //결과값 출력
		break;
	}

	case 'C':                            //섭씨일 때
	{
		converted_temp = celsius_to_fahren(temp);            //섭씨 to 화씨 함수 불러오기
		printf("The converted temperature is %.1fF", converted_temp);     //결과값 출력
		break;
	}
	}

	return 0;

}

double celsius_to_fahren(double temp)       //섭씨 to 화씨 함수 선언
{
	return (temp * 9 / 5) + 32;    //변환 공식
}

double fahren_to_celsius(double temp)       //화씨 to 섭씨 함수 선언
{
	return (temp - 32) / 1.8;     //변환 공식
}