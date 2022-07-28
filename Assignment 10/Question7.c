#include <stdio.h>

int Comb(int, int);
int fact(int);

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

int fact(int x)
{
    int i,f=1;
    for (i = 1; i <= x; i++)
        f*=i;
        return f;
}

int Comb(int n, int r)
{
    int ans=0;
    ans=fact(n)/(fact(r)*fact(n-r));

    return ans;
}
