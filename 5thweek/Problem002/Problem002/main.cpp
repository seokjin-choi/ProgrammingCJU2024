#include<stdio.h>

int main(void)
{
	int A[3] = { 1,2,3 };		//A배열 초기화
	int B[10];					//B배열 선언
	int i;

	for (i = 0; i<10; i++)		//B배열 수 만큼 반복
	{
		B[i] = A[i%3];			//B배열에 A배열 값 넣기
	}

	for (i = 0; i < 10; i++)	//B배열 수 만큼 반복
	{
		printf("%3d", B[i]);	//B배열값들 출력
	}
	return 0;
}