#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define INTEGER 0
#define REAL_NUMBER 1
#define ASCENDING 2
#define DESCENDING 3

// 배열 생성 함수
void GenerateArrangement(double* parr, int datatype) {
    srand((unsigned int)time(NULL)); // 랜덤 시드 초기화

    for (int i = 0; i < 10; i++) {
        if (datatype == INTEGER) {
            parr[i] = (double)(rand() % 201 - 100); // 정수 생성 (-100 ~ +100)
        }
        else if (datatype == REAL_NUMBER) {
            parr[i] = (rand() % 201 - 100) + ((double)rand() / RAND_MAX); // 실수 생성
        }
    }
}

// 정렬 함수
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

// 배열 출력 함수
void PrintArray(double* parr) {
    for (int i = 0; i < 10; i++) {
        printf("%.2f\t", parr[i]); // 소수점 둘째 자리까지 출력
    }
    printf("\n");
}

int main(void) {
    int datatype, modeselect;
    double arr[10]; // double 배열 선언

    // 데이터 타입 선택
    printf("Choose a data type (integer=0, real number=1): ");
    scanf_s("%d", &datatype);

    // 배열 생성
    GenerateArrangement(arr, datatype);

    // 랜덤 배열 출력
    printf("Random array:\n");
    PrintArray(arr);

    // 정렬 모드 선택
    printf("Choose the sort mode (ascending=2, descending=3): ");
    scanf_s("%d", &modeselect);

    // 정렬 수행
    CalcSortArray(arr, modeselect);

    // 정렬된 배열 출력
    printf("Sorted array:\n");
    PrintArray(arr);

    return 0;
}
