#include<stdio.h>

int main(void)
{
	int num_1 = 0;                          //변수 선언
	printf("Input the number(integer):");   //정수 입력 안내 문자
	scanf_s("%d", &num_1);                  //정수 입력


	if (num_1 % 2 == 0)                     //짝수일때 짝수 안내문 출력
	{
		printf("This number is even");
	}
	else if (num_1 % 2 == 1)                //홀수일때 홀수 안내문 출력
	{
		printf("This number is odd");
	}

	return 0;
}