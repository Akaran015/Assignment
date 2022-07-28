// Write a program to check whether a given number is an Armstrong number or not.

#include <stdio.h>
#include<math.h>

int main()
{
    int rem,num,x,y,count=0,sum=0;
    printf("Enter the Number: ");
    scanf("%d", &num);
    x=num;
    while (x!=0)
    {
        x=x/10;
        count++;
    }
    y=num;
    while (y!=0)
    {
        rem=y%10;
        y=y/10;
        sum+=pow(rem,count);
    }
    if(sum==num)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");
    
    return 0;
}