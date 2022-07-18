// Write a program to find the Nth term of the Fibonnaci series.

#include<stdio.h>

int main()
{
    int x,i,term=0,temp=1,l;
    printf("Enter the Number:");
    scanf("%d",&x);

    for (i = 1; i <=x; i++)
    {
        term+=temp;
        l=temp;
        temp=term;
        term=l;
        
    }
    printf("%d term of the Fibonnaci series %d",x,term) ;
    
    return 0;
}