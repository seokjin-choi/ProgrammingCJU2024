#include<stdio.h>

int main(void)
{
	int num_1, num_2,multiples,res;
	printf("Input the number(integer):");      //�Է¹��� ���
	scanf_s("%d%d", &num_1, &num_2);           //���� �Է�
	multiples = num_1 / num_2;                 //��� ���� �Է�
	res = num_1 % num_2;                       //������� Ȯ�� ��
	switch (res)
	{
	case 0:                                    //����϶� �������� ���
	{
		printf("num_1 is a %d multiple of num_2", multiples);
		break;
	}
	default:                                   //����� �ƴ϶�� ��� �ƴϴ� ���
	{
		printf("num_1 is not a multiple of num_2");
		break;
	}
	}
	return 0;
}