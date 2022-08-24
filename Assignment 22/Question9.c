// Write a program to allocate memory dynamically of the size in bytes entered by the user. Also handle the case when memory allocation is failed.

#include <stdio.h>
#include <stdlib.h>

void input(int);

int main()
{
    int size;
    printf("Enter the Size: ");
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
        printf("Allocated Successfully",s);
        
    }
    free(p);
}