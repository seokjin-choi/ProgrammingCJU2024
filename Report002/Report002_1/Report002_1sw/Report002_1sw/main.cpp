#include<stdio.h>

int main(void)
{
	int num_1 = 0,num_2;                            //변수 선언
	printf("Input the number(integer):");   //정수 입력 안내 문자
	scanf_s("%d", &num_1);                  //정수 입력

	num_2 = num_1 % 2;                      //홀짝 확인 식

	switch (num_2)
	{
	case 0:                                 //짝수일 때 짝수다 출력 

		{
			printf("This number is even");
			break;
		}
	default:                                //그 외(홀수)일때 홀수이다 출력
	{
		printf("This number is odd");
		break;
	}
	}
	return 0;
}