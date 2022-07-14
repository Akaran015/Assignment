#include<stdio.h>

int main()
{
    int num,rem;
    printf("Enter the Number: ");
    scanf("%d",&num);
        rem=num%10;
        num=num-rem;
    printf("Number is %d",num);
    return 0;
}