#include <stdio.h>

int main(void)
{
	int nAge = 0;
	double dHeight = 0.0;
	printf("Input your information(age, height):\n");
	scanf_s("%d %lf", &nAge, &dHeight);
	printf("Result(age, height):(%d, %.2lf)\n", nAge, dHeight);
	return 0;
}