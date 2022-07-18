// Write a program to print all Prime numbers between two given numbers.


#include <stdio.h>

int main()
{
    int i, j, flag = 1,r1,r2;

    printf(" Enter Range:");
    scanf("%d%d",&r1,&r2);
    for (i = r1; i <= r2; i++)
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