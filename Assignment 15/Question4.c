/*Write a function to rotate an array by n position in d direction.
  The d is an indicative value for left or right.
  (For example, if array of size 5 is [32, 29, 40, 12, 70];
  n is 2 and d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )*/

void Rotate(int a[],int b[],int,int);
#include <stdio.h>
int main()
{
    int i, j, a[50],b[50],size,n;
    printf("Enter the Size of Array: ");
    scanf("%d", &size);
    printf("Enter the %d number: ",size);
    for (i = 0; i <size; i++)
        scanf("%d", &a[i]);
    printf("Enter the Value  of n: ");
    scanf("%d", &n);

    Rotate(a,b,size,n);
    printf("Sorted Array : ");
    for (i = 0; i <size; i++)
    {
        printf("%d ", b[i]);
    }
    return 0;
}

void Rotate(int a[],int b[],int size,int n)
{
    int i;
    for (i = n-1; i < size; i++)
    {
        b[(i-n)+1] = a[i];
    }

    for (i = 0; i < (size-n)-1; i++)
    {
        b[(n+1)+i] = a[i];
    }
}