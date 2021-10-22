#include<stdio.h>
int main()
{
	int a[4][4] = { 2,5,6,8,3,9,5,7,9,4,2,3,6,8,7,5 };
	for (int i = 0; i < 4; i++)
	{
		for (int j = i + 1; j < 4; j++)
		{
			if (a[i][j] < a[j][i])
			{
				a[i][j] = a[j][i];
				a[j][i] = -1;
			}
			else a[j][i] = -1;
		}
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (a[i][j] != -1) printf("%2d", a[i][j]);
			else printf("  ");
		}
		printf("\n");
	}
	return 0;
}