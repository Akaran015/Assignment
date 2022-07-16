// Write a program to print the first N even natural numbers in reverse order.

#include<stdio.h>

int main()
{
    int i,x;
    printf("How many Even natural numbers do you want to print in reverse order:");
    scanf("%d",&x);

    printf("First %d even natural numbers in reverse order: ",x);
    for(i=x;i>=1;i--)
        printf("%d ",2*i);
    return 0;
}