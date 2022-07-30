// Write a function in C to merge two arrays of the same size sorted in descending order.

#include <stdio.h>

int main()
{
    int i, j, c[20], temp = 0;
    int a[10]={9,7,5,3,2};
    int b[5]={10,8,6,4,2};

    for (i = 5; i <= 9; i++)
    {
        a[i]=b[i-5];
    }

    


    for (i = 0; i <= 9; i++)
    {
        for (j = i+1; j <= 9; j++)
        {
            if (a[i] >= a[j])
            {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }

    printf("Sorted Array : ");
    for (i = 0; i <= 9; i++)
    {
        printf("%d ", a[i]);
    }
    
    return 0;
}