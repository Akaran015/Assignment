#include <stdio.h>
int Series(int);
int fact(int);

int main()
{
    int n, x;

    printf("Enter The Number: ");
    scanf("%d", &n);
    x = Series(n);
    printf("Sum of Series %d \n", x);
    return 0;
}

int fact(int x)
{
    int i, f = 1;
    for (i = 1; i <= x; i++)
        f *= i;
    return f;
}

int Series(int n)
{
    int sum = 0, i;
    for (i = 1; i <= n; i++)
    {
        sum += fact(i) / i;
    }
    return sum;
}
