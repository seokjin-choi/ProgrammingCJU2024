#include<stdio.h>

//calculating dot product
double CalDotProduct(double* vec1, double* vec2)
{
	double result = 0.0;

	for (int i = 0; i < 3; i++)
	{
		result += vec1[i] * vec2[i];
	}
	return result;
}

//calculating cross product 
void CalCrossProduct(double* vec1, double* vec2, double* result)
{
	result[0] = vec1[1] * vec2[2] - vec1[2] * vec2[1];
	result[1] = vec1[2] * vec2[0] - vec1[0] * vec2[2];
	result[2] = vec1[0] * vec2[1] - vec1[2] * vec2[0];
}

void PrintVector(const char *message,double *vec)
{
	printf("%s [%.2f, %.2f, %.2f]\n", message, vec[0], vec[1], vec[2]);
}

int main(void)
{
	double vec1[3], vec2[3], crossResult[3];    //�迭 ����
	double dotResult;							//��� ���� ����

	printf("Enter the components of the first vector:");
	for (int i = 0; i < 3; i++)					//���ʹ� 3�� ���� �Է�
	{
		scanf_s("%lf", &vec1[i]);
	}
	printf("Enter the components of the second vector:");
	for (int i = 0; i < 3; i++)					//���ʹ� 3�� ���� �Է�
	{
		scanf_s("%lf", &vec2[i]);
	}
	
	//calculate dotproduct
	dotResult = CalDotProduct(vec1, vec2);
	CalCrossProduct(vec1, vec2, crossResult);

	//print result
	PrintVector("FIrst vector: ", vec1);			//ù��° �迭 ���
	PrintVector("Second vector: ", vec2);			//�ι�° �迭 ���
	printf("Dot product: %.2f\n", dotResult);		//���� ��� ��� ���
	PrintVector("Cross product: ", crossResult);	//���� ��� ��� ���
	
	return 0;
}