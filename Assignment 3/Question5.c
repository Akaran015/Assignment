//Write a program to check whether a given number is a three-digit number or not.

#include<stdio.h>

int main()
{
    int num;
    printf("Enter the Number:");
    scanf("%d",&num);

    if(num>99 && num<1000)
        printf("Number is a three-digit number");
    else
        printf("Number is not a three-digit number");

    return 0;
}