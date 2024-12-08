#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define INTEGER 0
#define REAL_NUMBER 1

// �迭 ���� �Լ�: ���� �Ǵ� �Ǽ� �迭 ����
void GenerateArrangement(double* parr, int datatype) {
    srand((unsigned int)time(NULL)); // ���� �õ� �ʱ�ȭ

    for (int i = 0; i < 10; i++) {
        if (datatype == INTEGER) {
            parr[i] = (double)(rand() % 201 - 100); // ���� �� (-100 ~ +100)
        }
        else if (datatype == REAL_NUMBER) {
            parr[i] = (rand() % 201 - 100) + ((double)rand() / RAND_MAX); // �Ǽ� ��
        }
    }
}

// �迭 ���� ��� �Լ�: �迭�� ���� ������
void CalcInverseArray(double* parr) {
    for (int i = 0; i < 5; i++) {
        double temp = parr[i];
        parr[i] = parr[9 - i];
        parr[9 - i] = temp;
    }
}

// �迭 ��� �Լ�: �迭 ������ ���
void PrintArray(double* parr) {
    for (int i = 0; i < 10; i++) {
        printf("%.2f\t", parr[i]); // �Ҽ��� ��° �ڸ����� ���
    }
    printf("\n");
}

int main(void) {
    int datatype;
    double arr[10]; // �迭 ���� (double Ÿ��)

    // ������ Ÿ�� ����
    printf("Choose a data type (integer=0, real number=1): ");
    scanf_s("%d", &datatype);

    // �迭 ����
    GenerateArrangement(arr, datatype);

    // ���� �迭 ���
    printf("Random array:\n");
    PrintArray(arr);

    // �迭 ���� ���
    CalcInverseArray(arr);

    // ���� �迭 ���
    printf("Inverted array:\n");
    PrintArray(arr);

    return 0;
}
