#include<stdio.h>

int main(void)
{
	int x,y,z=0;  //변수 선언
	char operation;   //기호 선언
	
	printf("사칙연산 입력(정수) :");   //식 입력 안내 문자 
	scanf_s("%d%c%d", &x,&operation, sizeof (operation), &y);  //식 입력
	
	if (operation == '+')          //기호가 +일 때 더하고 출력
	{
		z = x + y;
		printf("%d%c%d=%d", x, operation, y, z);
	}
	else if (operation == '-')     //기호가 -일 때 빼고 출력
	{
		z = x - y;
		printf("%d%c%d=%d", x, operation, y, z);
	}
	else if (operation=='*')       //기호가 *일 때 곱하고 출력
	{
		z = x * y;
		printf("%d%c%d=%d", x, operation, y, z);
	}
	else if (operation == '/')     //기호가 /일 때 
	{
		if (y == 0)         //y가 0일때 계산 불가 선언
		{
			printf("계산할 수 없습니다.");
		}
		else if (y != 0)     //y가 0ㅇ이 아닐 때 나누고 결과 출력
		{
			z = x / y;
			printf("%d%c%d=%d", x, operation, y, z);
		}
		
	}
	

	return 0;
}