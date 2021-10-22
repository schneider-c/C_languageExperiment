#include<stdio.h>
#include<math.h>
int power(int x, int n)
{
    if (n == 0) return 1;
    else 
    {
        int result = x;
        int i = 0;
        for (i = 1; i < n; i++) result = result * x;
        return result;
    }
}
int main()
{
    int i = 0;
    for (i = 0; i <= 5; i++)
    {
        printf("2 raised to the power %d: %-6d ", i, power(2, i));
        printf("-3 raised to the power %d: %d \n", i, power(-3, i));
    }
    return 0;
}
