// Write a function to swap values of two in variables of calling function. (TSRS)

#include <stdio.h>
int swap(int *, int *);

int main()
{
    int a = 10, b = 20;

    printf("Original value of a is %d and b is %d", a, b);

    swap(&a, &b);

    printf("After Swapping a is %d and b is %d", a, b);
    return 0;
}

int swap(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}