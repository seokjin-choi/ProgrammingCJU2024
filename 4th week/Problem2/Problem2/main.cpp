#include<stdio.h>

int main(void)
{
	int num_1, num_2, gcd, lcm;                  //두 수와 최대공약수,최소공배수 변수 선언
	int i = 1;									 //공약수 변수 선언
	printf("Input the number: ");				 //두 수 입력 안내문
	scanf_s("%d%d", &num_1, &num_2);             //두 수 입력
	i = (num_1 < num_2) ? num_1 : num_2;         //num_1와 num_2중에 작은 값을 i에 저장

	while (i>0)									 //i가 양수일때 반복
	{
		if (num_1 % i == 0 && num_2 % i == 0)    //i가 num_1와 num_2의 최대 공약수 일때 정지
		{
			gcd = i;                             
			break;
		}
		
		i--;                                     //i를 줄여가며 조건에 맞는 i값 구하기

	}

	lcm = (num_1 * num_2) / gcd;                 //최소공배수 식

	printf("GCD is %d\n", gcd);                  //최대공약수 값 출력
	printf("LCM is %d", lcm);                    //최소공배수 값 출력
	
	
	return 0;

}