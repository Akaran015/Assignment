// Write a function to find the first occurrence of adjacent duplicate values in the array. Function has to return the value of the element.
int Duplicate(int a[], int, int);
#include <stdio.h>
int main()
{
    int i, a[50], size, n, d;
    printf("Enter the Size of Array: ");
    scanf("%d", &size);
    printf("Enter the %d number: ", size);
    for (i = 0; i < size; i++)
        scanf("%d", &a[i]);
    printf("Enter the Value  which you want to check: ");
    scanf("%d", &n);

    d = Duplicate(a, size, n);
    printf("First Occurrence of adjacent duplicate values in the array is at location: %d ", d + 1);
    return 0;
}

int Duplicate(int a[], int size, int n)
{
    int count = 0, i,j;

    for (i = 0; i < size; i++)
    {
        if (n == a[i])
        {
            for (j = i; j < size; j++)
            {
                if (n == a[i])
                {
                    break;
                }
            }
        }
    }
    return j;
}