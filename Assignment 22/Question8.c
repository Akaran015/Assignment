// Write a program to demonstrate dangling pointers in C.

#include <stdio.h>
#include <stdlib.h>
int *f1();
void fun();

int main()
{
    printf("Demonstrate Dangling Pointers in C");
    fun();
    return 0;
}

int *f1()
{

    int a;
    return &a;
}
void fun()
{
    int *p;
    p = f1();
    *p = 5;
}