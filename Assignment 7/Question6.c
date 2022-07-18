// Write a program to print all Prime numbers under 100.

#include <stdio.h>

int main()
{
    int i, j, flag = 1;

    printf(" Prime numbers under 100 : ");
    for (i = 2; i <= 100; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
            }
        }
        if (flag==1)
        {
            printf("%d ",i);
        }

        flag=1;
    }

    return 0;
}