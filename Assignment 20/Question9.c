//  Write a program to print the elements of an array in reverse order.

#include <stdio.h>

int main()
{
    int i,sum=0;
    int a[5] = {30, 10, 20};
    int *p=&a[0];

    for(i=2;i>=0;i--)
        printf("%d ",*(p+i));
    return 0;
}