#include<stdio.h>

int main(void)
{
	double grade;                       //���� ����
	int grade_unit;                     //���� ����

	printf("Input your grade : ");      //���� �Է� �ȳ� �޼���
	scanf_s("%lf", &grade);             //���� �Է�

	grade_unit = (int)(grade / 10);     //���� ���

	switch (grade_unit)
	{
	case 10:                            //100���϶� ���� A
	case 9:                            //90�����϶� ���� A
	case 8:                            //80�����϶� ���� A
		printf("Your grade is A");
		break;
	case 7:                            //70�����϶� ���� B
	case 6:                            //60�������϶� ���� B
		printf("Your grade is B");
		break;
	case 5:                            //50�����϶� ���� C
	case 4:                            //40�����϶� ���� C
		printf("Your grade is C");
		break;
	default:                            //40�� �̸��϶� ���� F
		printf("Your grade is F");
		break;

	}
	return 0;

}