// Write a program to print squares of the first N natural numbers.

#include<stdio.h>

int main()
{
    int i,x;
    printf("How many squares of the natural numbers do you want to print:");
    scanf("%d",&x);

    printf("Squares of the first %d natural numbers \n",x);
    for(i=1;i<=x;i++)
        printf("%d => %d \n",i,i*i);
    return 0;
}