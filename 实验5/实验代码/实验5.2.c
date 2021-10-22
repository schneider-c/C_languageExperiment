#include<stdio.h>
void chaifen(int n)
{
    if (n < 10) printf("%d ", n);
    else
    {
        printf("%d ", n % 10);
        chaifen(n / 10);
    }
}
int main()
{
    int n, result;
    scanf("%d", &n);
    chaifen(n);
    return 0;
}