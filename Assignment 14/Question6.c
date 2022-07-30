// Write a program to sort elements of an array of size 10. Take array values from the user.

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
    printf("Sorted Array : ");
    for (i = 0; i <= 9; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}