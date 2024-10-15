#include<stdio.h>

int main(void)
{
	int x, y, z;     //변수 선언
	char operation;  //기호 선언

	printf("사칙연산 입력(정수) :");   //식 입력 안내 문자 
	scanf_s("%d%c%d", &x, &operation, sizeof(operation), &y); //식 입력

	switch (operation)
	{
	case '+':          //기호가 +일 때 더하고 출력
	{
		z = x + y;
		printf("%d%c%d=%d", x, operation, y, z);
		break;
	}

	case '-':     //기호가 -일 때 빼고 출력
	{
		z = x - y;
		printf("%d%c%d=%d", x, operation, y, z);
		break;
	}

	case '*':       //기호가 *일 때 곱하고 출력
	{
		z = x * y;
		printf("%d%c%d=%d", x, operation, y, z);
		break;
	}

	case '/':     //기호가 /일 때 나누고 출력
	{
		z = x / y;
		printf("%d%c%d=%d", x, operation, y, z);
		break;
	}
	default:      //전부 해당 안될 때 계산불가 출력
	{
		printf("계산할 수 없습니다.");
	}

	}

	return 0;
}