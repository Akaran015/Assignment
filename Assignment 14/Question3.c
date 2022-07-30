// Write a program to calculate the sum of all even numbers and sum of all odd numbers, which are stored in an array of size 10. Take array values from the user.

#include <stdio.h>
int main()
{
    int i, a[10], se = 0, so = 0;
    printf("Enter the 10 number: ");
    for (i = 0; i <= 9; i++)
        scanf("%d", &a[i]);

    for (i = 0; i <= 9; i++)
    {
        if (a[i] % 2 == 0)
            se += a[i];
        else
            so += a[i];
    }
    printf("the sum of all even numbers is %d and sum of all odd numbers is: %d ",se,so);
    return 0;
}