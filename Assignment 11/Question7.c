// Write a function to print first N terms of Fibonacci series.
#include <stdio.h>
void Fib(int);

int main()
{
    int n;
    printf("Enter The Number: ");
    scanf("%d", &n);
    Fib(n);
    return 0;
}

void Fib(int n)
{

    int n1 = 0, n2 = 1, n3, i, number;
    printf("%d %d", n1, n2);
    for (i = 2; i < n; ++i)
    {
        n3 = n1 + n2;
        printf(" %d", n3);
        n1 = n2;
        n2 = n3;
    }
}