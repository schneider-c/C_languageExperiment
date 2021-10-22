#include<stdio.h>
int find(int(*p)[5], int n, int* r, int* c)
{
	int max = *((*p)+1);
	*r = NULL;
	*c = NULL;
	int i = 0, j = 0;
	for (i = 0; i < 5; i++)
	{
		for (j = i+1; j < 5; j++)
		{
				if (*(*(p + i) + j) >= max)
				{
					max = *(*(p + i) + j);
					*r = i;
					*c = j;
				}
		}
	}
	return max;
}
int main()
{
	int a[5][5] = { 0 }, max, row = 0, col = 0;
	int(*p)[5] = a;
	int i = 0;
	for (i = 0; i < 25; i++) scanf("%d", *p + i);
	max = find(a, 5, &row, &col);
	printf("%d %d %d", max, row, col);
}
