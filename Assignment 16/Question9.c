// Write a program in C to accept a matrix and determine whether it is a sparse matrix.

#include <stdio.h>

int main()
{
    int a[3][3];
    int i, j, czero=0,cnonzero=0;
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
            if (a[i][j]==0)
                czero++;
            else
                cnonzero++;
        }
    }

    if(czero>cnonzero)
        printf("It is a sparse matrix");
    else
        printf("It is not a sparse matrix");
    return 0;
}
