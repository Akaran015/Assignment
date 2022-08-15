// Write a program in C to print or display an upper triangular matrix.

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
        for (j = 0; j < 3; j++)
        {
            if ((i != 1 || j != 0) && (i != 2 || j != 0) && (i != 2 || j != 1))
                printf("%d ", a[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}
