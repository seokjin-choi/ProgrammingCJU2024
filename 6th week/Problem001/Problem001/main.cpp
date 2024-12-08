#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define INTEGER 0
#define REAL_NUMBER 1
#define ASCENDING 2
#define DESCENDING 3

// �迭 ���� �Լ�
void GenerateArrangement(double* parr, int datatype) {
    srand((unsigned int)time(NULL)); // ���� �õ� �ʱ�ȭ

    for (int i = 0; i < 10; i++) {
        if (datatype == INTEGER) {
            parr[i] = (double)(rand() % 201 - 100); // ���� ���� (-100 ~ +100)
        }
        else if (datatype == REAL_NUMBER) {
            parr[i] = (rand() % 201 - 100) + ((double)rand() / RAND_MAX); // �Ǽ� ����
        }
    }
}

// ���� �Լ�
void CalcSortArray(double* parr, int modeselect) {
    double temp;

    if (modeselect == ASCENDING) {
        for (int i = 0; i < 10; i++) {
            for (int j = i + 1; j < 10; j++) {
                if (parr[i] > parr[j]) {
                    temp = parr[i];
                    parr[i] = parr[j];
                    parr[j] = temp;
                }
            }
        }
    }
    else if (modeselect == DESCENDING) {
        for (int i = 0; i < 10; i++) {
            for (int j = i + 1; j < 10; j++) {
                if (parr[i] < parr[j]) {
                    temp = parr[i];
                    parr[i] = parr[j];
                    parr[j] = temp;
                }
            }
        }
    }
}

// �迭 ��� �Լ�
void PrintArray(double* parr) {
    for (int i = 0; i < 10; i++) {
        printf("%.2f\t", parr[i]); // �Ҽ��� ��° �ڸ����� ���
    }
    printf("\n");
}

int main(void) {
    int datatype, modeselect;
    double arr[10]; // double �迭 ����

    // ������ Ÿ�� ����
    printf("Choose a data type (integer=0, real number=1): ");
    scanf_s("%d", &datatype);

    // �迭 ����
    GenerateArrangement(arr, datatype);

    // ���� �迭 ���
    printf("Random array:\n");
    PrintArray(arr);

    // ���� ��� ����
    printf("Choose the sort mode (ascending=2, descending=3): ");
    scanf_s("%d", &modeselect);

    // ���� ����
    CalcSortArray(arr, modeselect);

    // ���ĵ� �迭 ���
    printf("Sorted array:\n");
    PrintArray(arr);

    return 0;
}
