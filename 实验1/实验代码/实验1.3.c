#include<stdio.h>
int main()
{
	float a = 0, b = 0;
	scanf("%f%f", &a, &b);
	float temp = 0;
	temp = a;
	a = b;
	b = temp;
	printf("%.1f %.1f", a, b);
	return 0;
}