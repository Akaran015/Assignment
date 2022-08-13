// Write a function in C to count the frequency of each element of an array.

#include <stdio.h>

int main()
{
    int x, i,greatest=0,temp=0,c=0;

    printf("Enter Array Limit Number: ");
    scanf("%d", &x);

    int a[x];

    printf("Enter %d Number: ",x);
    for(i = 0; i < x; i++)
        scanf("%d",&a[i]);
    
    greatest=a[0];

    for(i=1;i<x;i++)
    {
        if(greatest<=a[i])
        {
            greatest=a[i];
        }
    }
    
    int b[greatest+1];

    for(i = 0; i < greatest+1; i++)
        b[i]=0;

    for(i = 0; i < x; i++)
    {
        c=a[i];
        b[c]+=1;
    }

    for(i = 0; i < greatest+1; i++)
    {
        if(b[i]>0)
        {
            printf("%d => %d \n",i,b[i]);
        }
    }

    return 0;
}