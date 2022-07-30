// Write a program in C to calculate the power of any number using recursion.

#include <stdio.h>
int SD(int,int);
int main()
{
    int x,y, s;
    printf("Enter the Number: ");
    scanf("%d", &x);
    printf("Enter the Power of a  Number: ");
    scanf("%d", &y);

    s = SD(x,y);
    printf("The power of %d^%d is : %d ",x,y,s);
    return 0;
}

int SD(int n1,int n2)
{

    int x=0;
    if (n2>0)
        return n1 * SD(n1,n2-1);
    else
        return 1;
}