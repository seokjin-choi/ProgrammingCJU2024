#include<stdio.h>

int main(void)
{
	double grade;                       //점수 변수
	int grade_unit;                     //학점 변수

	printf("Input your grade : ");      //점수 입력 안내 메세지
	scanf_s("%lf", &grade);             //점수 입력

	grade_unit = (int)(grade / 10);     //학점 계산

	switch (grade_unit)
	{
	case 10:                            //100점일때 학점 A
	case 9:                            //90점대일때 학점 A
	case 8:                            //80점대일때 학점 A
		printf("Your grade is A");
		break;
	case 7:                            //70점대일때 학점 B
	case 6:                            //60점대점일때 학점 B
		printf("Your grade is B");
		break;
	case 5:                            //50점대일때 학점 C
	case 4:                            //40점대일때 학점 C
		printf("Your grade is C");
		break;
	default:                            //40점 미만일때 학점 F
		printf("Your grade is F");
		break;

	}
	return 0;

}