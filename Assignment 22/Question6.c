// Write a program in C to find the largest element using Dynamic Memory Allocation.

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
    int x,i,sum=0,lg=0;
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
        printf("Enter %d values In Array:\n",x);
        for(i=0;i<x;i++)
        {
            scanf("%d",p+i);
        }

        for(i=0;i<x;i++)
        {
            if(p[i]>=lg)
                lg=p[i];
        }
        
        printf("Largest in Array %d",lg);
    }
}