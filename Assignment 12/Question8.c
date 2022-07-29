// Write a recursive function to print binary of a given decimal number.

#include <stdio.h>
void DtoB(int);
int main()
{
    int x;
    printf("Enter the Decimal Number: ");
    scanf("%d", &x);
    printf("\nbinary of a given decimal number is:");
    DtoB(x);
    return 0;
}

void DtoB(int n)
{

    if (n == 1)
        printf("1");
    else
    {
        DtoB(n / 2);
        printf("%d", n % 2);
    }
}