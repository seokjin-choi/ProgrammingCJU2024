#include<stdio.h>

int main(void)
{
	int num_1, num_2, gcd, lcm,i;                //변수 선언
	printf("Input the number :");				 //두 수 입력 안내문
	scanf_s("%d%d", &num_1, &num_2);             //두 수 입력
	i = (num_1 < num_2) ? num_1 : num_2;

	do
	{
		if (num_1 % i == 0 && num_2 % i == 0)    //i가 num_1와 num_2의 최대 공약수 일때 정지
		{
			gcd = i;
			break;
		}

		i--;									  
	} while (i>0);								  //i가 양수일 동안 반복

	lcm = (num_1 * num_2) / gcd;				  //최소공배수 공식 설정

	printf("GCD is :%d\n", gcd);				  //최대공약수 출력
	printf("LCM is :%d", lcm);					  //최소공배수 출력

	return 0;
}