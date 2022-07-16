// Write a program to print a table of N.

#include<stdio.h>

int main()
{
    int i,x;
    printf("Enter a Number:");
    scanf("%d",&x);
    printf("Table of %d \n",x);
    for(i=1;i<=10;i++)
        printf("%d x %d = %d \n",x,i,x*i);
    return 0;
}