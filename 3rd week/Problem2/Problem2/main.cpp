#include<stdio.h>

int main(void)
{
	int x, y, z;
	char operation;

	printf("사칙연산 입력(정수) :");
	scanf_s("%d%c%d", &x, &operation, sizeof(operation), &y);

	switch (operation)
	{
	case '+':
	{
		z = x + y;
		printf("%d%c%d=%d", x, operation, y, z);
		break;
	}

	case '-':
	{
		z = x - y;
		printf("%d%c%d=%d", x, operation, y, z);
		break;
	}

	case '*':
	{
		z = x * y;
		printf("%d%c%d=%d", x, operation, y, z);
		break;
	}

	case '/':
	{
		z = x / y;
		printf("%d%c%d=%d", x, operation, y, z);
		break;
	}
	default:
	{
		printf("계산할 수 없습니다.");
	}

	}

	return 0;
}