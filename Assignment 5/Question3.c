// Write a program to print the first N natural numbers in reverse order.

#include<stdio.h>

int main()
{
    int i,x;
    printf("How many Natural number do you want to print in reverse order:");
    scanf("%d",&x);

    printf("First %d natural numbers in reverse order: ",x);
    for(i=x;i>0;i--)
        printf("%d ",i);
    return 0;
}