#include<stdio.h>

int main()
{
    int x,y,temp;
    printf("Enter Two Numbers which you want to Swap: ");
    scanf("%d %d",&x,&y);
    temp=x;
    x=y;
    y=temp;
    printf("Value after Swapping First Number=>%d and Second Number=>%d",x,y);
    return 0;
}