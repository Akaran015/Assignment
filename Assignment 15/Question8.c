// Write a function in C to print all unique elements in an array.

void Duplicate(int a[], int);
#include <stdio.h>
int main()
{
    int i, a[50], size, n;
    printf("Enter the Size of Array: ");
    scanf("%d", &size);
    printf("Enter the %d number: ", size);
    for (i = 0; i < size; i++)
        scanf("%d", &a[i]);

    Duplicate(a, size);
    return 0;
}

void Duplicate(int a[], int size)
{
    int i, j, flag = 0;

    for (i = 0; i < size; i++)
    {
        flag=0;
        for (j = 0; j < size; j++)
        {
            
            if(i==j)
                continue;
            else
            {
                if (a[i] == a[j])
                flag = 1;
            }
        }
        if (flag == 0)
            printf("%d ", a[i]);
    }
}