#include <stdio.h>

int main(void)
{
	double tri_base_length;
	double tri_height;
	

	printf("Input tri_base_length, tri_height:");
	scanf_s("%lf%lf", &tri_base_length, &tri_height);

	double tri_extent = tri_base_length * tri_height/2 ;

	printf("tri_extent: %.1lfm^2 ",tri_extent);
	return 0;
}