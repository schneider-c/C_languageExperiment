#include<stdio.h>
int main()
{
	float y = 0;
	float x = 0;
	
	scanf("%f", &x);
	if (x < 0) y = x * x + x - 6;
	else if (x >= 0 && x < 10 && x != 3) y = x * x - 5 * x + 6;
	else y = x * x - x - 1;
	printf("%.2f", y);
	return 0;
}
