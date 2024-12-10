#include<stdio.h>

//calculating dot product
double CalDotProduct(double* vec1, double* vec2)
{
	double result = 0.0;

	for (int i = 0; i < 3; i++)
	{
		result += vec1[i] * vec2[i];
	}
	return result;
}

//calculating cross product 
void CalCrossProduct(double* vec1, double* vec2, double* result)
{
	result[0] = vec1[1] * vec2[2] - vec1[2] * vec2[1];
	result[1] = vec1[2] * vec2[0] - vec1[0] * vec2[2];
	result[2] = vec1[0] * vec2[1] - vec1[2] * vec2[0];
}

void PrintVector(const char *message,double *vec)
{
	printf("%s [%.2f, %.2f, %.2f]\n", message, vec[0], vec[1], vec[2]);
}

int main(void)
{
	double vec1[3], vec2[3], crossResult[3];    //배열 선언
	double dotResult;							//결과 변수 선언

	printf("Enter the components of the first vector:");
	for (int i = 0; i < 3; i++)					//벡터당 3개 변수 입력
	{
		scanf_s("%lf", &vec1[i]);
	}
	printf("Enter the components of the second vector:");
	for (int i = 0; i < 3; i++)					//벡터당 3개 변수 입력
	{
		scanf_s("%lf", &vec2[i]);
	}
	
	//calculate dotproduct
	dotResult = CalDotProduct(vec1, vec2);
	CalCrossProduct(vec1, vec2, crossResult);

	//print result
	PrintVector("FIrst vector: ", vec1);			//첫번째 배열 출력
	PrintVector("Second vector: ", vec2);			//두번째 배열 출력
	printf("Dot product: %.2f\n", dotResult);		//내적 계산 결과 출력
	PrintVector("Cross product: ", crossResult);	//외적 계산 결과 출력
	
	return 0;
}