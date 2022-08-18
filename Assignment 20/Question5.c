// Write a program to find the maximum number between two numbers using a pointer

#include <stdio.h>
int max(int *, int *);

int main()
{
    int a = 67, b = 56;

    int m=max(&a, &b);

    printf("The Maximum number out of two is %d",m);
    return 0;
}

int max(int *p, int *q)
{
    if(*p>*q)
        return *p;
    else
        return *q;
}