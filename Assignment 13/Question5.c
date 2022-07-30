// Write a recursive function to calculate sum of digits of a given number.

#include <stdio.h>
int SD(int);
int main()
{
    int x, s;
    printf("Enter the Number: ");
    scanf("%d", &x);
    s = SD(x);
    printf("Sum of digits of a given number are: %d",s);
    return 0;
}

int SD(int n)
{

    if (n>0)
        return n%10 + SD(n/10);
    else
        return n;
}