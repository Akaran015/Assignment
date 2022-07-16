#include<stdio.h>

int main()
{
    int num;
    printf("Enter the Number: ");
    scanf("%d",&num);
    num=num%10*100+num/10;
    printf("Number is %d",num);
    return 0;
}
