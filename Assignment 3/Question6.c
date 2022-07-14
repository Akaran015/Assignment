//Write a program to print greater between two numbers. Print one number of both are the same.

#include<stdio.h>

int main()
{
    int fnum,snum;
    printf("Enter First Number:");
    scanf("%d",&fnum);

    printf("Enter Second Number:");
    scanf("%d",&snum);

    if(fnum>snum)
        printf("%d is Greater",fnum);
    else
    {
        if(fnum==snum)
        printf("%d both are the same",fnum);
        else
         printf("%d is Greater",snum);
    }
    return 0;
}