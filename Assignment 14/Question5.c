// Write a program to find the smallest number stored in an array of size 10. Take array values from the user.

#include <stdio.h>
int main()
{
    int i, a[10], smallest;
    printf("Enter the 10 number: ");
    for (i = 0; i <= 9; i++)
        scanf("%d", &a[i]);

    smallest=a[0];
    for (i = 1; i <= 9; i++)
    {
        if (a[i]<=smallest)
            smallest=a[i];
    }
    printf("The Smallest number stored in an array of size 10 is: %d ",smallest);
    return 0;
}