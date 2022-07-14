//Write a program to check whether a given number is an even number or an odd number without using % operator

#include<stdio.h>

int main()
{
    int num;
    printf("Enter the Number:");
    scanf("%d",&num);

    if(num&1)
        printf("Number is an odd number");
    else
        printf("Number is an even number");

    return 0;
}