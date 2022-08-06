// Write a program to calculate the product of two matrices each of order 3x3.

#include <stdio.h>

int main()
{
    int a[3][3], b[3][3];
    int i, j, pro = 1;
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
            pro *= a[i][j];
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            pro *= b[i][j];
        }
    }
    printf("The product of two matrices each of order 3x3 is %d", pro);
    return 0;
}