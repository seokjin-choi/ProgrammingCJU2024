#include<stdio.h>

int main(void)
{
	int num_1, num_2, multiples;               //변수 선언
	printf("Input the number(integer):");      //입력문자 출력
	scanf_s("%d%d", &num_1, &num_2);           //변수 입력
	multiples = num_1 / num_2;                 //배수 알아내는 공식 설정

	if (num_1 % num_2 == 0)                    //num_1이 num2의 배수라면 몇 배수인지 출력
	{

		printf("Num_1 is a %d multiple of num_2", multiples);
	}

	else if (num_1 % num_2 != 0)                //num_1이 num2의 배수가 아니라면 배수가 아니다 출력
	{
		printf("num_1 is not a multiple of num_2");
	}

	return 0;
}