#include<stdio.h>

int main(void)
{
	int A[3] = { 1,2,3 };		//A�迭 �ʱ�ȭ
	int B[10];					//B�迭 ����
	int i;

	for (i = 0; i<10; i++)		//B�迭 �� ��ŭ �ݺ�
	{
		B[i] = A[i%3];			//B�迭�� A�迭 �� �ֱ�
	}

	for (i = 0; i < 10; i++)	//B�迭 �� ��ŭ �ݺ�
	{
		printf("%3d", B[i]);	//B�迭���� ���
	}
	return 0;
}