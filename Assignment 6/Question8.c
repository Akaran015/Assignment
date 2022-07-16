// Write a program to check whether a given number is a Prime number or not.

#include<stdio.h>

int main()
{
    int i,x,flag=0;
    printf("Enter a number:");
    scanf("%d",&x);

    for(i=2;i<x;i++)
    {
        if(x%i==0)
            flag+=1;
    }
    if(flag!=0)
        printf("Not a Prime Number");
    else
        printf("Prime Number");
    return 0;
}