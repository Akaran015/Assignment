// Write a program to check whether a given number is positive, negative or zero.

#include<stdio.h>

int main()
{
    int num;
    printf("Enter the Number:");
    scanf("%d",&num);

    if(num>0)
        printf("Number is Positive");
    else if(num<0)
        printf("Number is Negative");
    else
        printf("Number is Zero");
    return 0;
}
