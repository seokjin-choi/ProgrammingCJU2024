#include<stdio.h>

int main(void)
{
	int num_1, num_2, multiples;               //���� ����
	printf("Input the number(integer):");      //�Է¹��� ���
	scanf_s("%d%d", &num_1, &num_2);           //���� �Է�
	multiples = num_1 / num_2;                 //��� �˾Ƴ��� ���� ����

	if (num_1 % num_2 == 0)                    //num_1�� num2�� ������ �� ������� ���
	{

		printf("Num_1 is a %d multiple of num_2", multiples);
	}

	else if (num_1 % num_2 != 0)                //num_1�� num2�� ����� �ƴ϶�� ����� �ƴϴ� ���
	{
		printf("num_1 is not a multiple of num_2");
	}

	return 0;
}