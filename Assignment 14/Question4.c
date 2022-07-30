// Write a program to find the greatest number stored in an array of size 10. Take array values from the user.

#include <stdio.h>
int main()
{
    int i, a[10], greatest;
    printf("Enter the 10 number: ");
    for (i = 0; i <= 9; i++)
        scanf("%d", &a[i]);

    greatest=a[0];
    for (i = 1; i <= 9; i++)
    {
        if (a[i]>=greatest)
            greatest=a[i];
    }
    printf("The greatest number stored in an array of size 10 is: %d ",greatest);
    return 0;
}