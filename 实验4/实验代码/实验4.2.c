#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	gets(a);
	int n = strlen(a);
	int letterCount = 0, numCount = 0, otherCount = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] <= 48 && a[i] <= 57) numCount = numCount + 1;
		else if (a[i] >= 65 && a[i] <= 90 || a[i] >= 97 && a[i] <= 122) letterCount = letterCount + 1;
		else otherCount = otherCount + 1;
	}
	printf("%d,%d,%d", letterCount, numCount, otherCount);
	return 0;
}