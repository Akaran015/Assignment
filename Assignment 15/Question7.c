// Write a function in C to count a total number of duplicate elements in an array.

int Duplicate(int a[],int,int);
#include <stdio.h>
int main()
{
    int i, a[50],size,n,d;
    printf("Enter the Size of Array: ");
    scanf("%d", &size);
    printf("Enter the %d number: ",size);
    for (i = 0; i <size; i++)
        scanf("%d", &a[i]);
    printf("Enter the Value  which you want to check: ");
    scanf("%d", &n);

    d=Duplicate(a,size,n);
    printf("Occurrence of adjacent duplicate values in the array is: %d ",d);
    return 0;
}

int Duplicate(int a[],int size,int n)
{
    int count=0,i;

    for (i = 0; i <size; i++)
    {
        if(n==a[i])
            count++;
    }
    return count;
}