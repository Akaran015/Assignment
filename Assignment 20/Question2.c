// Write a function to swap strings of two char arrays of calling functions.

#include <stdio.h>
#include <string.h>

void swap(char **, char **);

int main()
{
    char *a="Mohit", *b="Kumar";

    printf("Original value of a is %s and b is %s", a, b);

    swap(&a, &b);

    printf("\nAfter Swapping a is %s and b is %s", a, b);
    return 0;
}

void swap(char  **p, char **q)
{
    char *temp;
    temp=*p;
    *p=*q;
    *q=temp;
}