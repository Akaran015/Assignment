#include<stdio.h>

int main()
{
    int num;
    printf("Enter the Number: ");
    scanf("%d",&num);
    num=num>>1;
    printf("Number is %d",num);
    return 0;
}
