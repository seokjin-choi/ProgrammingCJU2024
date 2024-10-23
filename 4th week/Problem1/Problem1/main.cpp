#include<stdio.h>

int main(void)
{
	int multi_table;											  //단수 변수 선언
	int i,j;													  //for문 변수 선언
	printf("Please enter the multiplication table number: ");     //단수 입력 안내 문자 출력
	scanf_s("%d", &multi_table);                                  //단수 입력

	switch (multi_table)
	{
	case 2:                                                       //2단일때
	case 3:                                                       //3단일때
	case 4:                                                       //4단일때
	case 5:                                                       //5단일때
	case 6:                                                       //6단일때
	case 7:                                                       //7단일때
	case 8:                                                       //8단일때
	case 9:                                                       //9단일때
		
		for (i = 1; i < 10; i++)                                  //1~9까지 반복하여 곱셈
		{
			printf("%d * %d =%d\n", multi_table, i, multi_table * i);  //결과 출력
		}

		break;
	case 0:                                                      //0을 넣었을 때 2~9단까지 전부 출력
		for (i = 1; i < 10; i++)                                 //단수 1~9까지 
		{
			for (j = 1; j < 10; j++)                             //곱셈 1~9까지
			{
				printf("%d * %d =%d\n",i,j,i*j);
			}
		}

	}
	return 0;

}