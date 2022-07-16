// Write a program to print the first N odd natural numbers in reverse order.

#include<stdio.h>

int main()
{
    int i,x;
    printf("How many Odd natural numbers do you want to print in reverse order:");
    scanf("%d",&x);

    printf("First %d odd natural numbers in reverse order: ",x);
    for(i=x;i>0;i--)
        printf("%d ",2*i-1);
    return 0;
}