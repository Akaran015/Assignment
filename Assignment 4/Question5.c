// Write a program to print the first 10 odd natural numbers in reverse order.

#include<stdio.h>

int main()
{
    int i;
    printf("First 10 odd natural numbers in reverse order: ");
    for(i=10;i>0;i--)
        printf("%d ",2*i-1);
    return 0;
}