#include <stdio.h>

int main(void)
{
	double tri_base_length;                     //�ﰢ�� �غ� ����
	double tri_height;                          //�ﰢ�� ���� ����
	

	printf("Input tri_base_length, tri_height:");               //�Է� �ȳ� �޼��� ���
	scanf_s("%lf%lf", &tri_base_length, &tri_height);           //�غ�, ���� �Է�

	double tri_extent = tri_base_length * tri_height/2 ;        //�ﰢ�� ���� ����

	printf("tri_extent: %.1lfm^2 ",tri_extent);                 //�Է°� ���
	return 0;
}