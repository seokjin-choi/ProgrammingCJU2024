#include<stdio.h>

int main(void)
{
	int x, y, z;     //���� ����
	char operation;  //��ȣ ����

	printf("��Ģ���� �Է�(����) :");   //�� �Է� �ȳ� ���� 
	scanf_s("%d%c%d", &x, &operation, sizeof(operation), &y); //�� �Է�

	switch (operation)
	{
	case '+':          //��ȣ�� +�� �� ���ϰ� ���
	{
		z = x + y;
		printf("%d%c%d=%d", x, operation, y, z);
		break;
	}

	case '-':     //��ȣ�� -�� �� ���� ���
	{
		z = x - y;
		printf("%d%c%d=%d", x, operation, y, z);
		break;
	}

	case '*':       //��ȣ�� *�� �� ���ϰ� ���
	{
		z = x * y;
		printf("%d%c%d=%d", x, operation, y, z);
		break;
	}

	case '/':     //��ȣ�� /�� �� ������ ���
	{
		z = x / y;
		printf("%d%c%d=%d", x, operation, y, z);
		break;
	}
	default:      //���� �ش� �ȵ� �� ���Ұ� ���
	{
		printf("����� �� �����ϴ�.");
	}

	}

	return 0;
}