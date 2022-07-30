// Write a recursive function to calculate sum of first N natural numbers.

#include <stdio.h>
int SN(int);
int main()
{
    int x, s;
    printf("Enter the number of terms to be printed\n");
    scanf("%d", &x);
    s = SN(x);
    printf("Sum of first %d natural numbers are: %d", x, s);
    return 0;
}

int SN(int n)
{

    if (n != 0)
        return n + SN(n - 1);
    else
        return n;
}