// Write a program to print the first 10 even natural numbers.

#include<stdio.h>

int main()
{
    int i;
    printf("First 10 even natural numbers: ");
    for(i=1;i<=10;i++)
        printf("%d ",2*i);
    return 0;
}