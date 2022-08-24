// Write a program to calculate the sum of n numbers entered by the user using malloc and free.

#include <stdio.h>
#include <stdlib.h>

void input(int);

int main()
{
    int size;
    printf("How Many number of data values you Want to Enter: ");
    scanf("%d", &size);

    input(size);
    return 0;
}
void input(int s)
{
    int i,sum=0;
    int *p = (int *)malloc(sizeof(int) * s);
    if (p== NULL)
    {
        printf("Memory Not Allocated Successfully!");
        exit(0);
    }
    else
    {
        printf("Enter %d values:\n",s);
        for(i=0;i<s;i++)
        {
            scanf("%d",p+i);
        }
        
        for(i=0;i<s;i++)
        {
            sum+=p[i];
        }
        
        printf("Sum is %d",sum);
    }
    free(p);
}