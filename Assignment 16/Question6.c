// Write a program in C to find the sum of rows and columns of a Matrix.

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
        sum=0;
        for (j = 0; j < 3; j++)
        {
            sum += a[i][j];
        }
        printf("The sum of %d rows of a Matrix is %d\n", i,sum);
    }

    printf("\n\n");
    
    for (i = 0; i < 3; i++)
    {
        sum=0;
        for (j = 0; j < 3; j++)
        {
            sum += a[j][i];
        }
        printf("The sum of %d Column of a Matrix is %d\n", i,sum);
    }
    return 0;
}
