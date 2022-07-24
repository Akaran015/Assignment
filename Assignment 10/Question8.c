#include <stdio.h>

int Comb(int, int);

int main()
{
    int n, r, x;

    printf("Enter n items: ");
    scanf("%d", &n);

    printf("Enter r selected at a time: ");
    scanf("%d", &r);

    x = Comb(n, r);

    printf("N items and r selected at a time %d \n", x);
    return 0;
}
int Comb(int n, int r)
{
    int i, ans, n1 = 1, r1, c;

    for (i = 1; i <= n; i++)
        n1 *= i;
    c = n - r;

    for (i = 1; i <= c; i++)
        r1 *= i;

    ans = n1 * r1;

    return ans;
}
