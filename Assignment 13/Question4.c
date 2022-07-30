// Write a recursive function to calculate sum of squares of first n natural numbers.

#include <stdio.h>
int SS(int);
int main()
{
    int x, s;
    printf("Enter the Number: ");
    scanf("%d", &x);
    s = SS(x);
    printf("Sum of squares of first %d natural numbers are: %d", x, s);
    return 0;
}

int SS(int n)
{

    if (n != 0)
        return n*n + SS(n - 1);
    else
        return n;
}