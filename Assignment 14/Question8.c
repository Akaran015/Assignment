// Write a program to find the second smallest number in an array.Take array values from the user.

#include <stdio.h>
int main()
{
    int i, j, a[10], temp = 0;
    printf("Enter the 10 number: ");
    for (i = 0; i <= 9; i++)
        scanf("%d", &a[i]);

    for (i = 0; i <= 9; i++)
    {
        for (j = i+1; j <= 9; j++)
        {
            if (a[i] >= a[j])
            {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    printf("Second smallest in an array is : %d",a[1]);
    return 0;
}