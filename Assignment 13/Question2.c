// Write a recursive function to calculate sum of first N odd natural numbers.

#include <stdio.h>
int SO(int);
int main()
{
    int x, s;
    printf("Enter the Number: ");
    scanf("%d", &x);
    s = SO(x);
    printf("Sum of first %d Odd natural numbers are: %d", x, s);
    return 0;
}

int SO(int n)
{

    if (n != 0)
        return 2*n-1 + SO(n - 1);
    else
        return n;
}