#include<stdio.h>

int main(void)
{
	double grade;                               //성적 변수 선언
	printf("Input your grade: ");               //성적 입력 안내문 출력
	scanf_s("%lf", &grade);                     //성적 입력

	if (grade >= 80)                            //80점 이상일 때 A
	{
		printf("Your grade is A");
	}
	else if (grade >= 60 && grade < 80)         //60~79점일 때 B
	{
		printf("Your grade is B");
	}
	else if (grade >= 40 && grade < 60)         //40~59점일 때 C
	{
		printf("Your grade is C");
	}
	else                                        //40점 미만일 때 F
	{
		printf("Your grade is F");
	}

	
	return 0;

}