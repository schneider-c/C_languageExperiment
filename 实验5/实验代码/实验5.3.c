#include<stdio.h>
int Maximum_number_of_conventions(int num1, int num2)//最大公约数
{
	int i = 0;
	int max = 0;
	for (i = 1; i <=num1; i++)
		if (num1 % i == 0 && num2 % i == 0)
			max = i;
	return max;
}
int Minimum_common_multiple(int num1, int num2)
{
	int max = Maximum_number_of_conventions(num1, num2);
	int min = 0;
	min = num1 * num2 / max;
	return min;
}
int main()
{
	int x = 0, y = 0;
	scanf("%d%d", &x, &y);
	int max = 0;
	max = Maximum_number_of_conventions(x, y);
	int min = 0;
	min = Minimum_common_multiple(x, y);
	printf("%d %d", max,min);
	return 0;
}