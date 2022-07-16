// Write a program to calculate sum of squares of first N natural numbers.

#include<stdio.h>

int main()
{
    int i,x,sum=0;
    printf("Enter a number:");
    scanf("%d",&x);

    for(i=1;i<=x;i++)
        sum+=i*i;
    printf("Sum of Squares of the first %d natural numbers is %d \n",x,sum);
    return 0;
}