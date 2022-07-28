// Write a program in C to find the square of any number using the function.

#include<stdio.h>
int Sq(int);

int main()
{
    int n, x;
    printf("Enter The Number: ");
    scanf("%d", &n);
    x = Sq(n);
    printf("Square Of Given Number is %d", x);
    return 0;
}

int Sq(int n)
{
    int sq;
    sq = n * n;
    return sq;
}