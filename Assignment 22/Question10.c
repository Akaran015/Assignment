// Find out the maximum and minimum from an array using dynamic memory allocation in C.

#include <stdio.h>
#include <stdlib.h>

void input();

int main()
{

    input();
    return 0;
}
void input()
{
    int x, i, sum = 0, lg = 0,sm=0;
    printf("Enter Size of Array: ");
    scanf("%d", &x);

    int *p = (int *)malloc(sizeof(int) * x);
    if (p == NULL)
    {
        printf("Memory Not Allocated Successfully!");
        exit(0);
    }
    else
    {
        printf("Enter %d values In Array:\n", x);
        for (i = 0; i < x; i++)
        {
            scanf("%d", p+i);
        }

        for (i = 0; i < x; i++)
        {
            if (p[i] >= lg)
                lg = p[i];
        }
        sm=lg;

        for (i = 0; i < x; i++)
        {
            if (p[i] <= sm)
                sm = p[i];
        }

        printf("Smallest in Array %d", sm);
        printf("\nLargest in Array %d", lg);
    }
}