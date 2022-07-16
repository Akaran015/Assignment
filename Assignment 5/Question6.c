// Write a program to print the first N even natural numbers.

#include<stdio.h>

int main()
{
    int i,x;
    printf("How many Even natural numbers do you want to print:");
    scanf("%d",&x);

    printf("First %d even natural numbers: ",x);
    for(i=1;i<=x;i++)
        printf("%d ",2*i);
    return 0;
}