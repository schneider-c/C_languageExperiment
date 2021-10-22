#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void sort(int* a, int n)
{
	int i = 0, j = 0;
	int temp = 0;
	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			if (*(a + i) > * (a + j))
			{
				temp = *(a + i);
				*(a + i) = *(a + j);
				*(a + j) = temp;
			}
		}
	}
}
int main()
{
	int a[10];
	int i = 0;
	for (i = 0; i < 10; i++) scanf("%d", &a[i]);
	sort(a, 10);
	for (i = 0; i < 10; i++) printf("%d ", a[i]);
}