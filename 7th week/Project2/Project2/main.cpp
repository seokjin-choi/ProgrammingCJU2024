#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// 배열 합 계산 함수
int CalculateSum(int* arr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

// 분산 계산 함수
double CalculateVariance(int* arr, int size, double mean)
{
    double variance = 0.0;
    for (int i = 0; i < size; i++)
    {
        variance += pow(arr[i] - mean, 2);
    }
    return variance / size;
}

// 표준편차 계산 함수
double CalculateStandardDeviation(double variance)
{
    return sqrt(variance);
}

int main(void)
{
    int initial_size;
    int additional_size;
    int* integer = NULL;
    double sum, mean, variance, stddev;

    // 초기 배열 크기 입력
    printf("Enter the initial size: ");
    scanf_s("%d", &initial_size);

    // 동적 메모리 할당
    integer = (int*)malloc(initial_size * sizeof(int));
    if (integer == NULL)
    {
        printf("Not enough memory!\n");
        exit(1);
    }

    // 초기 배열 값 입력
    printf("Enter %d integers:\n", initial_size);
    for (int i = 0; i < initial_size; i++)
    {
        scanf_s("%d", &integer[i]);
    }

    // 초기 배열 계산
    sum = CalculateSum(integer, initial_size);
    mean = sum / initial_size;
    variance = CalculateVariance(integer, initial_size, mean);
    stddev = CalculateStandardDeviation(variance);

    // 결과 출력
    printf("\nInitial array size: %d\n", initial_size);
    printf("Entered values: ");
    for (int i = 0; i < initial_size; i++)
    {
        printf("%d ", integer[i]);
    }
    printf("\nSum: %.2lf\n", sum);
    printf("Mean: %.2lf\n", mean);
    printf("Variance: %.2lf\n", variance);
    printf("Standard Deviation: %.2lf\n", stddev);

    // 추가 크기 입력
    printf("\nEnter the additional size: ");
    scanf_s("%d", &additional_size);

    // 기존 메모리 재할당
    integer = (int*)realloc(integer, (initial_size + additional_size) * sizeof(int));
    if (integer == NULL)
    {
        printf("Not enough memory!\n");
        exit(1);
    }

    // 추가 배열 값 입력
    printf("Enter %d more integers:\n", additional_size);
    for (int i = initial_size; i < initial_size + additional_size; i++)
    {
        scanf_s("%d", &integer[i]);
    }

    // 새로운 배열 계산
    int new_size = initial_size + additional_size;
    sum = CalculateSum(integer, new_size);
    mean = sum / new_size;
    variance = CalculateVariance(integer, new_size, mean);
    stddev = CalculateStandardDeviation(variance);

    // 새로운 결과 출력
    printf("\nNew array size: %d\n", new_size);
    printf("Entered values: ");
    for (int i = 0; i < new_size; i++)
    {
        printf("%d ", integer[i]);
    }
    printf("\nSum: %.2lf\n", sum);
    printf("Mean: %.2lf\n", mean);
    printf("Variance: %.2lf\n", variance);
    printf("Standard Deviation: %.2lf\n", stddev);

    // 동적 메모리 해제
    free(integer);

    return 0;
}
