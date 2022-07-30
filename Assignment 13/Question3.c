// Write a recursive function to calculate sum of first N odd natural numbers.

#include <stdio.h>
int SE(int);
int main()
{
    int x, s;
    printf("Enter the Number: ");
    scanf("%d", &x);
    s = SE(x);
    printf("Sum of first %d Odd natural numbers are: %d", x, s);
    return 0;
}

int SE(int n)
{

    if (n != 0)
        return 2*n + SE(n - 1);
    else
        return n;
}