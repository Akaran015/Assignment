// Write a program to check whether a given number is an Armstrong number or not.

#include<stdio.h>

int main()
{
    int x,y,new=0,temp;
    printf("Enter the Number:");
    scanf("%d",&x);
    y=x;
    while(x>0)
    {
        temp=x%10;
        new+=(temp*temp*temp);
        x/=10;
    }
    
    if(new==y)
    printf("Given number is an Armstrong number");
    else
    {
    printf("Given number is not Armstrong number");
    }
    return 0;
}