// Write a program to calculate factorial of a number.

#include<stdio.h>

int main()
{
    int i,x,sum=1;
    printf("Enter a number:");
    scanf("%d",&x);

    for(i=1;i<=x;i++)
        sum*=i;

    printf("factorial of a number %d is %d \n",x,sum);
    return 0;
}