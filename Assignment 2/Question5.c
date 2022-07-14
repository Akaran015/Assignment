#include<stdio.h>

int main()
{
    int num,sum=0,last;
    printf("Enter Three Digit Number: ");
    scanf("%d",&num);
    while(num>0)
    {
        last=num%10;
        sum+=last;
        num=num/10;
    }
    printf("The sum of the digits is %d",sum);
    return 0;
}