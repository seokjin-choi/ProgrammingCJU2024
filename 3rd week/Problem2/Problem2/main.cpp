#include<stdio.h>

int main(void)
{
	int x, y, z;
	char operation;

	printf("��Ģ���� �Է�(����) :");
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
		printf("����� �� �����ϴ�.");
	}

	}

	return 0;
}