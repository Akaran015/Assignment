//Write a program to calculate the sum of two matrices each of order 3x3.

#include <stdio.h>

int main()
{
    int a[3][3], b[3][3];
    int i, j, sum = 0;
    printf("Enter 9 Value inside 1st Matrix");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter 9 Value inside 2nd Matrix");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum += a[i][j];
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum += b[i][j];
        }
    }
    printf("The sum of two matrices each of order 3x3 is %d", sum);
    return 0;
}