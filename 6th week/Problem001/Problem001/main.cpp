#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define UNUSED -1 // ������� �ʴ� �迭 ������ ��Ÿ���� ��

// ���� ���� �迭 ���� �Լ�
void GenerateArrangement(int* parr) {
    srand((unsigned int)time(NULL)); // ���� �õ� �ʱ�ȭ

    for (int i = 0; i < 10; i++) {
        parr[i] = rand() % 101; // 0 ~ 100 ������ ���� �� ����
    }
}

// ¦���� Ȧ�� �迭 �и� �Լ�
void CalcEvenOddArray(int* input, int* even, int* odd) {
    // ¦���� Ȧ�� �迭 �ʱ�ȭ
    for (int i = 0; i < 10; i++) {
        even[i] = UNUSED;
        odd[i] = UNUSED;
    }

    int evenIndex = 0, oddIndex = 0;

    // �Է� �迭�� ��ȸ�ϸ� ¦���� Ȧ���� ���� �и�
    for (int i = 0; i < 10; i++) {
        if (input[i] % 2 == 0) {
            even[evenIndex++] = input[i]; // ¦�� ����
        }
        else {
            odd[oddIndex++] = input[i];  // Ȧ�� ����
        }
    }
}

// �迭 ��� �Լ�
void PrintArray(const char* message, int* parr) {
    printf("%s\n", message);

    for (int i = 0; i < 10; i++) {
        if (parr[i] == UNUSED) {
            printf("UNUSED\t"); // ������� �ʴ� ���� ���
        }
        else {
            printf("%d\t", parr[i]);
        }
    }
    printf("\n");
}

int main(void) {
    int input[10];  // �Է� �迭
    int even[10];   // ¦�� �迭
    int odd[10];    // Ȧ�� �迭

    // ���� ���� �迭 ����
    GenerateArrangement(input);

    // ���� �迭 ���
    PrintArray("Random array:", input);

    // ¦���� Ȧ�� �迭 �и�
    CalcEvenOddArray(input, even, odd);

    // ��� ���
    PrintArray("Even numbers array:", even);
    PrintArray("Odd numbers array:", odd);

    return 0;
}
