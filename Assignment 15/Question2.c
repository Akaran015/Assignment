// Write a function to find the smallest number from the given array of any size. (TSRS)#include <stdio.h>

#include <stdio.h>
int Smallest(int b[],int);
int main()
{
    int i, a[50], size, smallest;
    printf("Enter the Size of Array: ");
    scanf("%d", &size);
    printf("Enter the %d number: ", size);
    for (i = 0; i < size; i++)
        scanf("%d", &a[i]);

    smallest = Smallest(a,size);
    printf("The smallest number stored in an array of size %d is: %d ",size, smallest);
    return 0;
}

int Smallest(int b[],int size)
{
    int s,i;
    s = b[0];
    for (i = 1; i < size ; i++)
    {
        if (b[i] <= s)
            s = b[i];
    }
    return s;
}