// Write a program to read a one dimensional array, print sum of all elements along with inputted array elements using dynamic memory allocation.

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
    int x,i,sum;
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
            sum+=p[i];
        }
        
        printf("Sum is %d",sum);
    }
}