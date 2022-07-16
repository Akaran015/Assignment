// Write a program to print the first 10 odd natural numbers in reverse order.

#include<stdio.h>

int main()
{
    int i;
    printf("First 10 odd natural numbers in reverse order: ");
    for(i=19;i>0;i=i-2)
        printf("%d ",i);
    return 0;
}