#include <stdio.h>

int Fact(int);

int main()
{
    int n, f;

    printf("Enter any number: ");
    scanf("%d", &n);
    f = Fact(n);

    printf("Factorial of %d is %d \n", n, f);
    return 0;
}

int Fact(int x)
{
    int i, fac = 1;

    for (i = 1; i <= x; i++)
    {
        fac *= i;
    }
    return fac;
}
