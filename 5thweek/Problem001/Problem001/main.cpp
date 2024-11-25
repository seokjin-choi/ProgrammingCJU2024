#include <stdio.h>

int main(void)
{
	char inputsentence[50];							//입력할 문장 정의
	char outputsentence[50];						//출력될 문장 정의
	int count = 0;									//변환될 문자수 정의
	int i = 0;

	printf("Uppercase ASCII code(%d~%d)\n", 'A', 'Z');			//대문자 아스키코드 값 확인
	printf("Lowercase ASCII code(%d~%d)\n", 'a', 'z');			//소문자 아스키코드 값 확인
	printf("Input the sentence : ");							//입력할 문장 입력 안내문
	gets_s(inputsentence, 50);	//문장 입력 

	for (i = 0; inputsentence[i] != '\0'; i++)				//입력한 문장 소문자 변환 루프
	{
		if (inputsentence[i] >= 'A' && inputsentence[i] <= 'Z') //아스키 코드로 대문자 확인
		{
			outputsentence[i] = inputsentence[i] + 32;			//소문자 변환 식
			count++;
		}
		else
			outputsentence[i] = inputsentence[i];				//소문자일 때 그대로 복사

	}
	outputsentence[i] = '\0';									//문장 끝 부분 쓰레기값 지우기

	printf("Translated sentence :%s\n", outputsentence);		//변환된 문장 출력
	printf("Translated characters counts: %d", count);			//변환된 문자수 출력

	return 0;

	

}