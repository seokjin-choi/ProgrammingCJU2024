#include<stdio.h>

int main(void)
{
	int num_1, num_2,multiples,res;
	printf("Input the number(integer):");      //입력문자 출력
	scanf_s("%d%d", &num_1, &num_2);           //변수 입력
	multiples = num_1 / num_2;                 //배수 변수 입력
	res = num_1 % num_2;                       //배수인지 확인 식
	switch (res)
	{
	case 0:                                    //배수일때 몇배수인지 출력
	{
		printf("num_1 is a %d multiple of num_2", multiples);
		break;
	}
	default:                                   //배수가 아니라면 배수 아니다 출력
	{
		printf("num_1 is not a multiple of num_2");
		break;
	}
	}
	return 0;
}