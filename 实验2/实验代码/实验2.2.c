#include<stdio.h>
void turnMaxorMin(int num)
{
	int a[3] = { 0 };
	a[0] = num % 10;
	a[1] = (num / 10) % 10;
	a[2] = num / 100;
	int temp = 0, i = 0, j = 0;
	for (j = 0; j < 2; j++)
	{
		for (i = 0; i < 2 - j; i++)
		{
			if (a[i] > a[i + 1])
			{
				temp = a[i + 1];
				a[i + 1] = a[i];
				a[i] = temp;
			}
		}
	}
	int max = 0, min = 0;
	max = a[2] * 100 + a[1] * 10 + a[0];
	min = a[0] * 100 + a[1] * 10 + a[2];
	printf("%d %d\n\n", max, min);
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	if (num >= 100 && num < 1000) turnMaxorMin(num);
	else printf("Wrong\n\n");
	return 0;
}