#include <stdio.h>
void Pascal();
int main()
{
    Pascal();
    return 0;
}
void Pascal()
{

    int rows, coef = 1, space, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = 0; i < rows; i++)
    {
        for (space = 1; space <= rows - i; space++)
            printf("  ");
        for (j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef * (i - j + 1) / j;
            printf("%4d", coef);
        }
        printf("\n");
    }
}

// int Comb(int, int);
// int fact(int);

// int main()
// {
//     int n, r, x;

//     printf("Enter n items: ");
//     scanf("%d", &n);

//     printf("Enter r selected at a time: ");
//     scanf("%d", &r);

//     x = Comb(n, r);

//     printf("N items and r selected at a time %d \n", x);
//     return 0;
// }

// int fact(int x)
// {
//     int i,f=1;
//     for (i = 1; i <= x; i++)
//         f*=i;
//         return f;
// }

// int Comb(int n, int r)
// {
//     int ans=0;
//     ans=fact(n)/(fact(r)*fact(n-r));

//     return ans;
// }
