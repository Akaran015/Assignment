// Write a program in C to demonstrate how to handle the pointers in the program.

#include <stdio.h>

int main()
{
    int a=10;
    int *p,**q,***r;
    p=&a;
    q=&p;
    r=&q;
    printf("a: %d, p: %d, q: %d, r: %d",a,*p,**q,***r);
    *p=20;
    printf("\nUpdate Value: a: %d, p: %d, q: %d, r: %d",a,*p,**q,***r);
    ***r=30;
    printf("\nUpdate Value: a: %d, p: %d, q: %d, r: %d",a,*p,**q,***r);

    return 0;
}