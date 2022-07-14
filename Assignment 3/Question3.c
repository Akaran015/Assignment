//Write a program to check whether a given number is an even number or an odd number.

#include<stdio.h>

int main()
{
    int num;
    printf("Enter the Number:");
    scanf("%d",&num);

    if(num%2==0)
        printf("Number is an even number");
    else
        printf("Number is an odd number");

    return 0;
}