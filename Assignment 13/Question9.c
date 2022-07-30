// Write a program in C to count the digits of a given number using recursion.

#include <stdio.h>
int SD(int);
int main()
{
    int x, s;
    printf("Enter the Number: ");
    scanf("%d", &x);
    s = SD(x);
    printf("Number of digits in given number: %d ",s);
    return 0;
}

int SD(int n)
{

    int x=0;
    if (n>0)
        return ++x + SD(n/10);
    else
        return x;
}