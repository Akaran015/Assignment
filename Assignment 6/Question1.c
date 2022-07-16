// Write a program to calculate sum of first N natural numbers.

#include<stdio.h>

int main()
{
    int i,x,sum=0;
    printf("Enter a Number:");
    scanf("%d",&x);
    
    for(i=1;i<=x;i++)
        sum+=i;
    printf("Sum of  %d natural numbers is %d ",x,sum);
    return 0;
}