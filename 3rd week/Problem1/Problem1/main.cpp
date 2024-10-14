#include<stdio.h>

int main(void)
{
	int x,y,z=0;
	char operation;
	
	printf("사칙연산 입력(정수) :");
	scanf_s("%d%c%d", &x,&operation, sizeof (operation), &y);
	
	if (operation == '+')
	{
		z = x + y;
		printf("%d%c%d=%d", x, operation, y, z);
	}
	else if (operation == '-')
	{
		z = x - y;
		printf("%d%c%d=%d", x, operation, y, z);
	}
	else if (operation=='*')
	{
		z = x * y;
		printf("%d%c%d=%d", x, operation, y, z);
	}
	else if (operation == '/')
	{
		if (y == 0)
		{
			printf("계산할 수 없습니다.");
		}
		else if (y != 0)
		{
			z = x / y;
			printf("%d%c%d=%d", x, operation, y, z);
		}
		
	}
	

	return 0;
}