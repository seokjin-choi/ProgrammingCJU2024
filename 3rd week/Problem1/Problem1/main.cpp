#include<stdio.h>

int main(void)
{
	int x,y,z=0;  //���� ����
	char operation;   //��ȣ ����
	
	printf("��Ģ���� �Է�(����) :");   //�� �Է� �ȳ� ���� 
	scanf_s("%d%c%d", &x,&operation, sizeof (operation), &y);  //�� �Է�
	
	if (operation == '+')          //��ȣ�� +�� �� ���ϰ� ���
	{
		z = x + y;
		printf("%d%c%d=%d", x, operation, y, z);
	}
	else if (operation == '-')     //��ȣ�� -�� �� ���� ���
	{
		z = x - y;
		printf("%d%c%d=%d", x, operation, y, z);
	}
	else if (operation=='*')       //��ȣ�� *�� �� ���ϰ� ���
	{
		z = x * y;
		printf("%d%c%d=%d", x, operation, y, z);
	}
	else if (operation == '/')     //��ȣ�� /�� �� 
	{
		if (y == 0)         //y�� 0�϶� ��� �Ұ� ����
		{
			printf("����� �� �����ϴ�.");
		}
		else if (y != 0)     //y�� 0���� �ƴ� �� ������ ��� ���
		{
			z = x / y;
			printf("%d%c%d=%d", x, operation, y, z);
		}
		
	}
	

	return 0;
}