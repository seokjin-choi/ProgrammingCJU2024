#include <stdio.h>

int main(void)
{
	char inputsentence[50];							//�Է��� ���� ����
	char outputsentence[50];						//��µ� ���� ����
	int count = 0;									//��ȯ�� ���ڼ� ����
	int i = 0;

	printf("Uppercase ASCII code(%d~%d)\n", 'A', 'Z');			//�빮�� �ƽ�Ű�ڵ� �� Ȯ��
	printf("Lowercase ASCII code(%d~%d)\n", 'a', 'z');			//�ҹ��� �ƽ�Ű�ڵ� �� Ȯ��
	printf("Input the sentence : ");							//�Է��� ���� �Է� �ȳ���
	gets_s(inputsentence, 50);	//���� �Է� 

	for (i = 0; inputsentence[i] != '\0'; i++)				//�Է��� ���� �ҹ��� ��ȯ ����
	{
		if (inputsentence[i] >= 'A' && inputsentence[i] <= 'Z') //�ƽ�Ű �ڵ�� �빮�� Ȯ��
		{
			outputsentence[i] = inputsentence[i] + 32;			//�ҹ��� ��ȯ ��
			count++;
		}
		else
			outputsentence[i] = inputsentence[i];				//�ҹ����� �� �״�� ����

	}
	outputsentence[i] = '\0';									//���� �� �κ� �����Ⱚ �����

	printf("Translated sentence :%s\n", outputsentence);		//��ȯ�� ���� ���
	printf("Translated characters counts: %d", count);			//��ȯ�� ���ڼ� ���

	return 0;

	

}