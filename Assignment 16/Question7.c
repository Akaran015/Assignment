// Write a program in C to print or display the lower triangular of a given matrix.

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
            if ((i != 0 || j != 0) && (i != 0 || j != 1) && (i != 1 || j != 0))
                printf("%d ", a[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}
