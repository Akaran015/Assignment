// Write a program to reverse a given number.

#include<stdio.h>

int main()
{
    int num,rem,nnum=0;
    printf("Enter a number:");
    scanf("%d",&num);

    while (num>0)
    {
        rem=num%10;
        nnum*=10;
        nnum+=rem;
        num/=10;
    }
    printf("Reverse of a given number is %d:",nnum);
    
    return 0;
}