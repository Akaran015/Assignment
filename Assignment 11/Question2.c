#include <stdio.h>

int HCF(int, int);

int main() {
    int n1, n2, h;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    h = HCF(n1, n2);

    printf("The HCF of %d and %d is %d.", n1, n2, h);
}

int HCF(int n1, int n2)
{
    int gcd, i;
    for (i = 1; i <= n1 && i <= n2; ++i)
    {
        if (n1 % i == 0 && n2 % i == 0)
            gcd = i;
    }
    return gcd;

}