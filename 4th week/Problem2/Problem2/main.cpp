#include<stdio.h>

int main(void)
{
	int num_1, num_2, gcd, lcm;                  //�� ���� �ִ�����,�ּҰ���� ���� ����
	int i = 1;									 //����� ���� ����
	printf("Input the number: ");				 //�� �� �Է� �ȳ���
	scanf_s("%d%d", &num_1, &num_2);             //�� �� �Է�
	i = (num_1 < num_2) ? num_1 : num_2;         //num_1�� num_2�߿� ���� ���� i�� ����

	while (i>0)									 //i�� ����϶� �ݺ�
	{
		if (num_1 % i == 0 && num_2 % i == 0)    //i�� num_1�� num_2�� �ִ� ����� �϶� ����
		{
			gcd = i;                             
			break;
		}
		
		i--;                                     //i�� �ٿ����� ���ǿ� �´� i�� ���ϱ�

	}

	lcm = (num_1 * num_2) / gcd;                 //�ּҰ���� ��

	printf("GCD is %d\n", gcd);                  //�ִ����� �� ���
	printf("LCM is %d", lcm);                    //�ּҰ���� �� ���
	
	
	return 0;

}