// Write a program to demonstrate memory leak in C.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p = (int *)malloc(sizeof(int));
    *p = 5;
    printf("Value pointed By P is %d",*p);
    return 0;
}