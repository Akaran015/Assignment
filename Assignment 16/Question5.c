// Write a program in C to find the sum of left diagonals of a matrix.

#include <stdio.h>

int main()
{
    int a[3][3];
    int i, j, sum = 0;
    printf("Enter 9 Value inside Matrix");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j <= 2-i; j++)
        {
            sum += a[i][j];
        }
    }
    printf("The sum of left diagonals of a matrix is %d", sum);
    return 0;
}