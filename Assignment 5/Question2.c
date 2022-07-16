// Write a program to print the first N natural numbers.

#include<stdio.h>

int main()
{
    int i,x;
    printf("How many Natural number do you want to print:");
    scanf("%d",&x);

    printf("First %d natural numbers: ",x);
    for(i=1;i<=x;i++)
        printf("%d ",i);
    return 0;
}