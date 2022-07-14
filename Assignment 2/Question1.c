#include<stdio.h>

int main()
{
    int x,unit;
    printf("Enter the Number: ");
    scanf("%d",&x);
    unit=x%10;
    printf("Unit digit of a given number is %d",unit);
    return 0;
}