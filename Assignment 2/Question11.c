#include<stdio.h>

int main()
{
    int num,dig;
    printf("Enter the Number: ");
    scanf("%d",&num);
    printf("Enter the Digit: ");
    scanf("%d",&dig);
    num*=10;
    num+=dig;
    printf("Resulting number is %d",num);
    return 0;
}