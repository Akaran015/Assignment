#include<stdio.h>

int main()
{
    int num,x;
    printf("Enter the Number: ");
    scanf("%d",&num);
    x=num&1;
    if(x==1)
    printf("Odd");
    else
    printf("Even");
    return 0;
}