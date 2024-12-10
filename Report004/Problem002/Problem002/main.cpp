#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

//Generate random numbers
void GenerateRandomNumbers(int* arr, int size, int min, int max)
{
	for (int i = 0; i < size; i++)		//정해진 개수만큼 무작위 변수 생성
	{
		arr[i] = rand() % (max - min + 1) + min;//min~max 범위의 정수 생성
	}
}

//Calculate sum
int CalculateSum(int* arr, int start, int end)
{
	int sum = 0;
	for (int i = start; i <= end; i++)			
	{
		sum += arr[i];
	}
	return sum;
}

//Calculate variance
double CalculateVariance(int* arr, int start, int end, double mean)
{
	double variance = 0.0;
	for (int i = start; i <= end; i++)				
	{
		variance += pow(arr[i] - mean, 2);
	}
	return variance / (end - start + 1);
}
//Calculate standard deviation
double CalculateStandarDeviation(double variance)
{
	return sqrt(variance);
}

void PrintArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d\t", arr[i]);
	}
	printf("\n");
}

int main(void)
{
	int numbers[100];							//100개 무작위 정수 배열
	int minRange, maxRange;						//선택된 범위
	int sum;									//총합
	double mean=0.0, variance=0.0, stdDev=0.0;

	srand((unsigned int)time(NULL));			//랜덤 시드 초기화

	GenerateRandomNumbers(numbers, 100, 1, 100);	//1-100까지의 100개의 랜덤정수 생성 
	//생성된 배열 출력
	printf("Generated numbers:\n");		
	PrintArray(numbers, 100);
	//범위 지정
	printf("\nEnter the range for the 10 numbers (start index 0-90): ");
	scanf_s("%d", &minRange);
	maxRange = minRange + 9;
	//범위 검사
	if (minRange < 0 || maxRange >= 100 || maxRange - minRange + 1 != 10)
	{
		printf("Invalid range! Please choose a start index between 0 and 90.\n");
		return 1;
	}
	//선택한 범위의 합 계산
	sum = CalculateSum(numbers, minRange, maxRange);
	//평균 계산
	mean = (double)sum/10;
	//분산 계산
	variance = CalculateVariance(numbers, minRange, maxRange, mean);
	//표준편차 계산
	stdDev = CalculateStandarDeviation(variance);
	//결과 출력
	printf("\nResults:\n");
	printf("Selected range (%d to %d): ", minRange, maxRange);
	for (int i = minRange; i <= maxRange; i++)
	{
		printf("%d\t", numbers[i]);
	}
	printf("\nSum: %d\n", sum);
	printf("Mean: %.2f\n", mean);
	printf("Variance: %.2f\n", variance);
	printf("Standard Deviation: %.2f\n", stdDev);
	return 0;
}