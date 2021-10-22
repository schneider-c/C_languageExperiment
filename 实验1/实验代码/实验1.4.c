#include<stdio.h>
int main()
{
	float num1 = 0, num2 = 0, num3 = 0, num4 = 0;
	scanf("%f%f%f%f", &num1, &num2, &num3, &num4);
	float max = 0;
	max = num1;
	if (max < num2) max = num2;
	if (max < num3) max = num3;
	if (max < num4) max = num4;
	printf("%.2f",max);
	return 0;
}