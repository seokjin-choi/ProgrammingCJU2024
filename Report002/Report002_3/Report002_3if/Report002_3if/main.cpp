#include<stdio.h>

int main(void)
{
	double grade;                               //���� ���� ����
	printf("Input your grade: ");               //���� �Է� �ȳ��� ���
	scanf_s("%lf", &grade);                     //���� �Է�

	if (grade >= 80)                            //80�� �̻��� �� A
	{
		printf("Your grade is A");
	}
	else if (grade >= 60 && grade < 80)         //60~79���� �� B
	{
		printf("Your grade is B");
	}
	else if (grade >= 40 && grade < 60)         //40~59���� �� C
	{
		printf("Your grade is C");
	}
	else                                        //40�� �̸��� �� F
	{
		printf("Your grade is F");
	}

	
	return 0;

}