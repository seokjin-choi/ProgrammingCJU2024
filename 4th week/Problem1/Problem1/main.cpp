#include<stdio.h>

int main(void)
{
	int multi_table;											  //�ܼ� ���� ����
	int i,j;													  //for�� ���� ����
	printf("Please enter the multiplication table number: ");     //�ܼ� �Է� �ȳ� ���� ���
	scanf_s("%d", &multi_table);                                  //�ܼ� �Է�

	switch (multi_table)
	{
	case 2:                                                       //2���϶�
	case 3:                                                       //3���϶�
	case 4:                                                       //4���϶�
	case 5:                                                       //5���϶�
	case 6:                                                       //6���϶�
	case 7:                                                       //7���϶�
	case 8:                                                       //8���϶�
	case 9:                                                       //9���϶�
		
		for (i = 1; i < 10; i++)                                  //1~9���� �ݺ��Ͽ� ����
		{
			printf("%d * %d =%d\n", multi_table, i, multi_table * i);  //��� ���
		}

		break;
	case 0:                                                      //0�� �־��� �� 2~9�ܱ��� ���� ���
		for (i = 1; i < 10; i++)                                 //�ܼ� 1~9���� 
		{
			for (j = 1; j < 10; j++)                             //���� 1~9����
			{
				printf("%d * %d =%d\n",i,j,i*j);
			}
		}

	}
	return 0;

}