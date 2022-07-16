// Write a program to print the first 10 even natural numbers.

#include<stdio.h>

int main()
{
    int i;
    printf("First 10 even natural numbers: ");
    for(i=2;i<21;i=i+2)
        printf("%d ",i);
    return 0;
}