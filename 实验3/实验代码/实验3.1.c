#include<stdio.h>
#include<math.h>
int main()
{
	int a[50] = { 0 };
	int i = 0;
	float mul = 0;
	float sum = 0;
	for (i = 0; i < 50; i++) a[i] = i + 1;
	for (i = 0; i < 49; i++)
	{
		mul = (float)1 / (a[i] * a[i + 1]);
		
		if (mul < 0.001)
		{
			printf("n=%d", i+1);
			break;
		}
		sum = sum + mul;
	}
	printf(",s=%.4f", sum-0.0001);
	return 0;
}
