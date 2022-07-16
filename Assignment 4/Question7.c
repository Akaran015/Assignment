// Write a program to print the first 10 even natural numbers in reverse order.

#include<stdio.h>

int main()
{
    int i;
    printf("First 10 even natural numbers in reverse order: ");
    for(i=10;i>=1;i--)
        printf("%d ",2*i);
    return 0;
}