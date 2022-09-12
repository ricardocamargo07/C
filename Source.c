#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

#define PI ((float)3.14)


void cone(float r, float h, float* area, float* volume);

int main(void)
{
	float area, volume;
	float r, h;
	
	printf("Entre com o raio: \n");
	scanf("%f",&r);

	printf("Entre com a altura: \n");
	scanf("%f", &h);

	cone(r, h, &area, &volume);
	printf("Area=%f Volume=%f\n", area, volume);
	return 0;
}

void cone(float r, float h, float* area, float* volume)
{
	float s = sqrtf(r * r + h * h); 
	*area = PI * r * (r + s);
	*volume = (PI * r * r * h) / 3;
}