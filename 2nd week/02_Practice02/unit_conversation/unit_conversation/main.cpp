#include <stdio.h>


int main(void)
{
	double ft, inch, kg, meter, slug;
	
	printf("Input ft, inch, kg, meter, slug: ");
	scanf_s("%lf%lf%lf%lf%lf", &ft, &inch,&kg,&meter,&slug);
	double meter_ft = ft / 0.3048;
	double meter_inch = inch / 0.0254;
	double slug_kg = kg * 14.9;
	double ft_meter = meter * 0.3048;
	double inch_meter = meter * 0.0254;
	double kg_slug = slug / 14.9;
	printf("meter_ft:%.1lf, meter_inch:%.1lf, slug_kg:%.1lf, ft_meter:%.1lf, inch_meter:%.2lf, kg_slug:%.2lf", meter_ft, meter_inch,slug_kg,ft_meter,inch_meter,kg_slug);
	
	return 0;
}