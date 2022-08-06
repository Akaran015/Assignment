// Write a program in C to find the transpose of a given matrix.

#include <stdio.h>

int main()
{
    int a[3][3],temp;
    int i, j, pro = 1;
    printf("Enter 9 Value inside 1st Matrix");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = i; j < 3; j++)
        {
            if(i!=j)
            {
                temp=a[i][j];
                a[i][j]=a[j][i];
                a[j][i]=temp;
            }
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    
    return 0;
}