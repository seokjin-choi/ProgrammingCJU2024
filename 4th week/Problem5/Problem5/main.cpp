#include<stdio.h>
#include<math.h>
double degree_to_radian(double degree);    //���� ��ȯ �Լ� ����
double degree_to_radian(double degree)     //���� ��ȯ �Լ� ����
{
	return (degree * 3.14) / 180;          //���� ��ȯ �� 
}

int main(void)
{
	double degree, radian,sin_res,cos_res;   //���� ���� 
	
	printf("Input the degree: ");            //���� �Է� �ȳ��� ���
	scanf_s("%lf", &degree);                 //���� �Է�

	radian = degree_to_radian(degree);       //���� ��ȯ

	sin_res = sin(radian);                   //���� �� ���
	cos_res = cos(radian);                   //�ڻ��� �� ���

	printf("Sin(%.1lf) =%.3lf\n",degree, sin_res);    //���ΰ� ���
	printf("Cos(%.1lf) =%.3lf\n",degree, cos_res);    //�ڻ��� ���
	
}