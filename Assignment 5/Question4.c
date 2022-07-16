// Write a program to print the first N odd natural numbers.

#include<stdio.h>

int main()
{
    int i,x;
    printf("How many Odd natural numbers do you want to print:");
    scanf("%d",&x);

    printf("First %d odd natural numbers: ",x);
    for(i=1;i<=x;i++)
        printf("%d ",2*i-1);
    return 0;
}