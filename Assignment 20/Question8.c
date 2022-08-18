// Write a program to compute the sum of all elements in an array using pointers.

#include <stdio.h>

int main()
{
    int i,sum=0;
    int a[5] = {30, 10, 20};
    int *p=&a[0];

    for(i=0;i<3;i++)
        sum+=*(p+i);
    printf("Sum is %d",sum);
    return 0;
}