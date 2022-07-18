// Write a program to check whether a given number is there in the Fibonacci series or not.

#include<stdio.h>

int main()
{
    int x,i,term=0,temp=1,l,flag=0;
    printf("Enter the Number:");
    scanf("%d",&x);
    for (i = 1; i <x; i++)
    {
        term+=temp;
        l=temp;
        temp=term;
        term=l;

        if(x==temp)
        {
            printf("Number is there in the Fibonacci series");
            flag=1;
        }
    }
        if(flag==0)
            printf("Number is Not there in the Fibonacci series");
    
    
    return 0;
}