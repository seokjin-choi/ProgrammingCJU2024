#include<stdio.h>

int main(void)
{
	int num_1 = 0;                          //���� ����
	printf("Input the number(integer):");   //���� �Է� �ȳ� ����
	scanf_s("%d", &num_1);                  //���� �Է�


	if (num_1 % 2 == 0)                     //¦���϶� ¦�� �ȳ��� ���
	{
		printf("This number is even");
	}
	else if (num_1 % 2 == 1)                //Ȧ���϶� Ȧ�� �ȳ��� ���
	{
		printf("This number is odd");
	}

	return 0;
}