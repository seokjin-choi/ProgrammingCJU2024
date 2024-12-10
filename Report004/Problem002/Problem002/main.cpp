#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

//Generate random numbers
void GenerateRandomNumbers(int* arr, int size, int min, int max)
{
	for (int i = 0; i < size; i++)		//������ ������ŭ ������ ���� ����
	{
		arr[i] = rand() % (max - min + 1) + min;//min~max ������ ���� ����
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
	int numbers[100];							//100�� ������ ���� �迭
	int minRange, maxRange;						//���õ� ����
	int sum;									//����
	double mean=0.0, variance=0.0, stdDev=0.0;

	srand((unsigned int)time(NULL));			//���� �õ� �ʱ�ȭ

	GenerateRandomNumbers(numbers, 100, 1, 100);	//1-100������ 100���� �������� ���� 
	//������ �迭 ���
	printf("Generated numbers:\n");		
	PrintArray(numbers, 100);
	//���� ����
	printf("\nEnter the range for the 10 numbers (start index 0-90): ");
	scanf_s("%d", &minRange);
	maxRange = minRange + 9;
	//���� �˻�
	if (minRange < 0 || maxRange >= 100 || maxRange - minRange + 1 != 10)
	{
		printf("Invalid range! Please choose a start index between 0 and 90.\n");
		return 1;
	}
	//������ ������ �� ���
	sum = CalculateSum(numbers, minRange, maxRange);
	//��� ���
	mean = (double)sum/10;
	//�л� ���
	variance = CalculateVariance(numbers, minRange, maxRange, mean);
	//ǥ������ ���
	stdDev = CalculateStandarDeviation(variance);
	//��� ���
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