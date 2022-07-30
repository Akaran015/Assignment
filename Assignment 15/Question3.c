// Write a function to sort an array of any size.

void Sort(int b[],int);
#include <stdio.h>
int main()
{
    int i, j, a[50],size;
    printf("Enter the Size of Array: ");
    scanf("%d", &size);
    printf("Enter the %d number: ",size);
    for (i = 0; i <size; i++)
        scanf("%d", &a[i]);

    Sort(a,size);
    printf("Sorted Array : ");
    for (i = 0; i <size; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}

void Sort(int b[],int size)
{
    int i,j,temp = 0;
    for (i = 0; i <size; i++)
    {
        for (j = i+1; j <size; j++)
        {
            if (b[i] >= b[j])
            {
                temp = b[j];
                b[j] = b[i];
                b[i] = temp;
            }
        }
    }
}