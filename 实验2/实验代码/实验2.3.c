#include<stdio.h>
int Operation(int data1, char operator,int data2)
{
	if (operator=='+') printf("%.2f\n\n", (float)(data1 + data2));
	else if (operator=='-') printf("%.2f\n\n", (float)(data1 - data2));
	else if (operator=='*') printf("%.2f\n\n", (float)(data1 * data2));
	else if (operator=='/')
	{
		if (data2 != 0) printf("%.2f\n\n", (float)(data1 / data2));
		else printf("Wrong0");
	}
	else printf("Wrong2");
}
int main()
{

	int data1 = 0, data2 = 0;
	char operator;
	int returncount = 0;
	int count = 0;
	returncount = scanf("%d%c%d", &data1, &operator, &data2);
	if (returncount != 3) printf("Wrong1");
	else Operation(data1,operator,data2);
	return 0;
}