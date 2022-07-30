// Write a recursive function to calculate factorial of a given number.

#include <stdio.h>
int F(int);
int main()
{
    int x, y, s;
    printf("Enter the Number: ");
    scanf("%d", &x);
    s = F(x);
    printf("Factorial of a given number is : %d ", s);
    return 0;
}

int F(int n)
{
    if (n == 1)
        return 1;
    else
        return n * F(n - 1);
}