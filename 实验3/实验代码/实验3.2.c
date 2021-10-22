#include<stdio.h>
#include<math.h>
int main()
{
	int num[1000];
	int n = 0, count = 0;
	int i = 0, j = 0;
	for (i = 2; i <= 1000; i++)
	{
		int count = 1;
		for (j = 2; j <= (int)(sqrt((double)i)); j++)
		{
			if (i % j == 0) count = 0;
		}
		if (count == 1)
		{
			num[n] = i;
			n = n + 1;
		}
	}
	int sum = 0;
	printf("Min:");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", num[i]);
		sum = sum + num[i];
	}
	printf("\nMax:");
	for (i = n - 1; i > n - 11; i--)
	{
		printf("%d ", num[i]);
		sum = sum + num[i];
	}
	printf("\nTotal:%d", sum);
	return 0;
}
