#include <stdio.h>
void Pascal();
int fact(int);
int main()
{
    Pascal();
    return 0;
}
int fact(int x)
{
    int i, f = 1;
    for (i = 1; i <= x; i++)
        f *= i;
    return f;
}

void Pascal()
{

    int i, j, k, n = 0, r;
    for (i = 0; i <= 4; i++)
    {
        r = 0;
        k = 4 - i;
        for (j = 0; j <= 8; j++)
        {
            if (j >= 4 - i && j <= 4 + i)
            {
                if (k == j)
                {
                    int ans;
                    ans = fact(n) / (fact(r) * fact(n - r));
                    printf("%d", ans);
                    r++;
                    k = k + 2;
                }
                else
                    printf(" ");
            }
            else
                printf(" ");
               
        }
        printf("\n");
        n++;
    }
}