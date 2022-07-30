// Write a program to calculate the sum of numbers stored in an array of size 10. Take array values from the user.

#include<stdio.h>

int main()
{
    int i,a[10],sum=0;

    printf("Enter the 10 number in sorted manner: ");
    for ( i = 0; i <= 9; i++)
    {
        scanf("%d",&a[i]);
    }

    for ( i = 0; i <= 9; i++)
    {
        sum+=a[i];
    }

    printf("The sum of numbers stored in an array of size 10 is: %d ",sum);
    

    return 0;
}