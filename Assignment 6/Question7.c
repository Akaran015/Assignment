// Write a program to count digits in a given number.

#include<stdio.h>

int main()
{
    int x,count=0;
    printf("Enter a number:");
    scanf("%d",&x);

    while(x>0)
    {
        x/=10;
        count++;
    }
    printf("Digits in a given number is %d \n",count);
    return 0;
}