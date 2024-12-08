#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define UNUSED -1 // 사용하지 않는 배열 공간을 나타내는 값

// 랜덤 정수 배열 생성 함수
void GenerateArrangement(int* parr) {
    srand((unsigned int)time(NULL)); // 랜덤 시드 초기화

    for (int i = 0; i < 10; i++) {
        parr[i] = rand() % 101; // 0 ~ 100 범위의 랜덤 값 생성
    }
}

// 짝수와 홀수 배열 분리 함수
void CalcEvenOddArray(int* input, int* even, int* odd) {
    // 짝수와 홀수 배열 초기화
    for (int i = 0; i < 10; i++) {
        even[i] = UNUSED;
        odd[i] = UNUSED;
    }

    int evenIndex = 0, oddIndex = 0;

    // 입력 배열을 순회하며 짝수와 홀수를 각각 분리
    for (int i = 0; i < 10; i++) {
        if (input[i] % 2 == 0) {
            even[evenIndex++] = input[i]; // 짝수 저장
        }
        else {
            odd[oddIndex++] = input[i];  // 홀수 저장
        }
    }
}

// 배열 출력 함수
void PrintArray(const char* message, int* parr) {
    printf("%s\n", message);

    for (int i = 0; i < 10; i++) {
        if (parr[i] == UNUSED) {
            printf("UNUSED\t"); // 사용하지 않는 공간 출력
        }
        else {
            printf("%d\t", parr[i]);
        }
    }
    printf("\n");
}

int main(void) {
    int input[10];  // 입력 배열
    int even[10];   // 짝수 배열
    int odd[10];    // 홀수 배열

    // 랜덤 정수 배열 생성
    GenerateArrangement(input);

    // 랜덤 배열 출력
    PrintArray("Random array:", input);

    // 짝수와 홀수 배열 분리
    CalcEvenOddArray(input, even, odd);

    // 결과 출력
    PrintArray("Even numbers array:", even);
    PrintArray("Odd numbers array:", odd);

    return 0;
}
