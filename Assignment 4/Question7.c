// Write a program to print the first 10 even natural numbers in reverse order.

#include<stdio.h>

int main()
{
    int i;
    printf("First 10 even natural numbers: ");
    for(i=20;i>1;i=i-2)
        printf("%d ",i);
    return 0;
}