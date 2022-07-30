// Write a program to calculate the average of numbers stored in an array of size 10. Take array values from the user.

#include<stdio.h>

int main()
{
    int i,a[10],sum=0;
    float avg;

    printf("Enter the 10 number: ");
    for ( i = 0; i <= 9; i++)
    {
        scanf("%d",&a[i]);
    }

    for ( i = 0; i <= 9; i++)
    {
        sum+=a[i];
    }
    avg=sum/10;

    printf("The average of numbers stored in an array of size 10 is: %.2f ",avg);
    

    return 0;
}