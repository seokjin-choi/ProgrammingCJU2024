#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// �迭 �� ��� �Լ�
int CalculateSum(int* arr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

// �л� ��� �Լ�
double CalculateVariance(int* arr, int size, double mean)
{
    double variance = 0.0;
    for (int i = 0; i < size; i++)
    {
        variance += pow(arr[i] - mean, 2);
    }
    return variance / size;
}

// ǥ������ ��� �Լ�
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

    // �ʱ� �迭 ũ�� �Է�
    printf("Enter the initial size: ");
    scanf_s("%d", &initial_size);

    // ���� �޸� �Ҵ�
    integer = (int*)malloc(initial_size * sizeof(int));
    if (integer == NULL)
    {
        printf("Not enough memory!\n");
        exit(1);
    }

    // �ʱ� �迭 �� �Է�
    printf("Enter %d integers:\n", initial_size);
    for (int i = 0; i < initial_size; i++)
    {
        scanf_s("%d", &integer[i]);
    }

    // �ʱ� �迭 ���
    sum = CalculateSum(integer, initial_size);
    mean = sum / initial_size;
    variance = CalculateVariance(integer, initial_size, mean);
    stddev = CalculateStandardDeviation(variance);

    // ��� ���
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

    // �߰� ũ�� �Է�
    printf("\nEnter the additional size: ");
    scanf_s("%d", &additional_size);

    // ���� �޸� ���Ҵ�
    integer = (int*)realloc(integer, (initial_size + additional_size) * sizeof(int));
    if (integer == NULL)
    {
        printf("Not enough memory!\n");
        exit(1);
    }

    // �߰� �迭 �� �Է�
    printf("Enter %d more integers:\n", additional_size);
    for (int i = initial_size; i < initial_size + additional_size; i++)
    {
        scanf_s("%d", &integer[i]);
    }

    // ���ο� �迭 ���
    int new_size = initial_size + additional_size;
    sum = CalculateSum(integer, new_size);
    mean = sum / new_size;
    variance = CalculateVariance(integer, new_size, mean);
    stddev = CalculateStandardDeviation(variance);

    // ���ο� ��� ���
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

    // ���� �޸� ����
    free(integer);

    return 0;
}
