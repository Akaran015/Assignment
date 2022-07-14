// Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.


#include<stdio.h>

int main()
{
    float cp,sp,profit,loss,per;
    printf("Enter Cost Price:");
    scanf("%d",&cp);
    printf("Enter Selling Price:");
    scanf("%d",&sp);
    if(sp>cp)
    {
        profit=sp-cp;
        per=(profit*100)/cp;
    }
    else
    {
        loss=cp-sp;
        per=(loss*100)/cp;
    }
    if(profit>0)
    printf("%.0f%% Profit percentage",per);
    else
    printf("%.0f%% Loss percentage",per);
    
    
    return 0;
}