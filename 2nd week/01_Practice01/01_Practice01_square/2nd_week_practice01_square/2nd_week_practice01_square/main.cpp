#include <stdio.h>

int main(void)

{
	double sq_base_length, sq_height;                //�簢�� �غ�,���� ���� ����

	printf("Input sq_base_length, sq_height: ");     //�Է� �ȳ� �޼��� ���
	scanf_s("%lf%lf", &sq_base_length, &sq_height);  //�簢�� �غ�,���� �Է�

	double sq_extent=sq_base_length * sq_height;     //�簢�� ���� ���� ����
	printf("sq_extent:%.1lf", sq_extent);            //�簢�� ����
	return 0;
	
}