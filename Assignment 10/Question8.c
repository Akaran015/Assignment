#include <stdio.h>

int fact(int);
int per(int, int);

int main()
{
    int n, r, x;

    printf("Enter n items: ");
    scanf("%d", &n);

    printf("Enter r selected at a time: ");
    scanf("%d", &r);

    x = per(n, r);

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

int per(int n, int r)
{
    int ans;

    ans=fact(n)/fact(r);
    return ans;
}