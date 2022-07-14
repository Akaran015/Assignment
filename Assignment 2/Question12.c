//1 USD is INR 76.23

#include<stdio.h>

int main()
{
    float inr,usd=1.0;
    printf("Enter the amount in INR: ");
    scanf("%f",&inr);
    usd=inr*76.23;
    printf("Amount in USD is %.2f",usd);
    return 0;
}