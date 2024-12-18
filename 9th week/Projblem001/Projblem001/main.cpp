#include <stdio.h>
#include <math.h>

//x,y,z structure declaration
typedef struct
{
	float x;
	float y;
	float z;
}coordinate;

//Calculate Euclidean distance
float CalEuclideanDistance(coordinate* p, coordinate* q)
{
	return sqrt(pow(p->x - q->x, 2) + pow(p->y - q->y, 2) + pow(p->z - q->z, 2));
}


int main(void)
{
	coordinate points[2];				//2 3D coordinate 

	for (int i = 0; i < 2; i++)			//Enter the 2 3D coordinate (x,y,z)
	{
		printf("Enter the %d coordinate (x,y,z): ", i + 1);
		scanf_s("%f %f %f", &points[i].x, &points[i].y, &points[i].z);
	}

	float distance = CalEuclideanDistance(&points[0], &points[1]);		//calculating Euclidean distance

	printf("EUclidean Distance:%.2f", distance);		//print result
	return 0;
}