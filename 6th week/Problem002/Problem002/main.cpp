#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define INTEGER 0
#define REAL_NUMBER 1

// 배열 생성 함수: 정수 또는 실수 배열 생성
void GenerateArrangement(double* parr, int datatype) {
    srand((unsigned int)time(NULL)); // 랜덤 시드 초기화

    for (int i = 0; i < 10; i++) {
        if (datatype == INTEGER) {
            parr[i] = (double)(rand() % 201 - 100); // 정수 값 (-100 ~ +100)
        }
        else if (datatype == REAL_NUMBER) {
            parr[i] = (rand() % 201 - 100) + ((double)rand() / RAND_MAX); // 실수 값
        }
    }
}

// 배열 역순 계산 함수: 배열의 값을 뒤집음
void CalcInverseArray(double* parr) {
    for (int i = 0; i < 5; i++) {
        double temp = parr[i];
        parr[i] = parr[9 - i];
        parr[9 - i] = temp;
    }
}

// 배열 출력 함수: 배열 내용을 출력
void PrintArray(double* parr) {
    for (int i = 0; i < 10; i++) {
        printf("%.2f\t", parr[i]); // 소수점 둘째 자리까지 출력
    }
    printf("\n");
}

int main(void) {
    int datatype;
    double arr[10]; // 배열 선언 (double 타입)

    // 데이터 타입 선택
    printf("Choose a data type (integer=0, real number=1): ");
    scanf_s("%d", &datatype);

    // 배열 생성
    GenerateArrangement(arr, datatype);

    // 랜덤 배열 출력
    printf("Random array:\n");
    PrintArray(arr);

    // 배열 역순 계산
    CalcInverseArray(arr);

    // 역순 배열 출력
    printf("Inverted array:\n");
    PrintArray(arr);

    return 0;
}
