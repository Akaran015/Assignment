// Write a program to find next Prime number of a given number.


#include <stdio.h>

int main()
{
    int i, j, flag = 1,r1;

    printf("Enter The Number: ");
    scanf("%d",&r1);

    for (i = 2; 1>0; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
            }
        }
        if (flag==1 && i>r1)
        {
            printf("Next Prime number of a given number is %d ",i);
            break;
        }

        flag=1;
    }

    return 0;
}