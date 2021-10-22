#include<stdio.h>
int main()
{
	int num = 0;
	int n1 = 0;
	scanf("%d", &num);
	while (num != 0)
	{
		n1 = num % 10;
		num = num / 10;
		printf("%d ", n1);
	}
	return 0;
}