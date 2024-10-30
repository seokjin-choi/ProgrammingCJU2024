#include<stdio.h>

double celsius_to_fahren(double temp);   //�Լ� ����(���� to ȭ��)
double fahren_to_celsius(double temp);   //�Լ� ����(ȭ�� to ����)

int main(void)
{

	double temp, converted_temp;         //�µ�, ��ȯ�� �µ� ���� ����
	char unit;                           //��ȣ ����

	printf("Input the temperature: ");   //�µ� �Է� �ȳ��� ���
	scanf_s("%lf%c", &temp, &unit, sizeof(unit));    //�µ�, ��ȣ �Է�

	switch (unit)
	{
	case 'F':                            //ȭ���� ��
	{
		converted_temp = fahren_to_celsius(temp);            //ȭ�� to ���� �Լ� �ҷ�����
		printf("The converted temperature is %.1fC", converted_temp);    //����� ���
		break;
	}

	case 'C':                            //������ ��
	{
		converted_temp = celsius_to_fahren(temp);            //���� to ȭ�� �Լ� �ҷ�����
		printf("The converted temperature is %.1fF", converted_temp);     //����� ���
		break;
	}
	}

	return 0;

}

double celsius_to_fahren(double temp)       //���� to ȭ�� �Լ� ����
{
	return (temp * 9 / 5) + 32;    //��ȯ ����
}

double fahren_to_celsius(double temp)       //ȭ�� to ���� �Լ� ����
{
	return (temp - 32) / 1.8;     //��ȯ ����
}