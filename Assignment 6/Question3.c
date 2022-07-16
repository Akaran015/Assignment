// Write a program to calculate sum of first N odd natural numbers.

#include<stdio.h>

int main()
{
    int i,x,sum=0;
    printf("Enter a Number:");
    scanf("%d",&x);

    for(i=1;i<=x;i++)
        sum+=2*i-1;
    printf("Sum of first %d odd natural numbers is %d: ",x,sum);
    return 0;
}