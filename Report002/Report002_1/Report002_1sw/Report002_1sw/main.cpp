#include<stdio.h>

int main(void)
{
	int num_1 = 0,num_2;                            //���� ����
	printf("Input the number(integer):");   //���� �Է� �ȳ� ����
	scanf_s("%d", &num_1);                  //���� �Է�

	num_2 = num_1 % 2;                      //Ȧ¦ Ȯ�� ��

	switch (num_2)
	{
	case 0:                                 //¦���� �� ¦���� ��� 

		{
			printf("This number is even");
			break;
		}
	default:                                //�� ��(Ȧ��)�϶� Ȧ���̴� ���
	{
		printf("This number is odd");
		break;
	}
	}
	return 0;
}