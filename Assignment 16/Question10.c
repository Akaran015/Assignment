// Write a program in C to find the row with maximum number of 1s.

#include <stdio.h>

int main()
{
    int a[3][3],b[3];
    int i, j, c1=0,maxrow,count=0;
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
        c1=0;
        for (j = 0; j < 3; j++)
        {
            if (a[i][j]==1)
                c1++;
        }
        b[i]=c1;
    }

    maxrow=b[0];
    count=0;
    for (i = 1; i < 3; i++)
    {
        if(maxrow<=b[i])
        {
            maxrow=b[i];
            count=i;
        }
    }
    printf("The row with maximum number of 1s is %d",count);
    return 0;
}
