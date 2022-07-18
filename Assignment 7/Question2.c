// Write a program to print first N terms of Fibonacci series.

#include<stdio.h>

int main()
{
    int x,i,term=0,temp=1,l;
    printf("Enter the Number:");
    scanf("%d",&x);
    printf("%d terms of Fibonacci series: 0 ",x);
    for (i = 1; i <x; i++)
    {
        term+=temp;
        l=temp;
        temp=term;
        term=l;

    printf("%d ",term) ;    
    }
    
    
    return 0;
}