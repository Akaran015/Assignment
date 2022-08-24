/*Write a program to ask the user to input a number of data values.
he would like to enter then create an array dynamically to accommodate the data values.
Now take the input from the user and display the average of data values*/


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
    int i;
    float avg=0;
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
            avg+=p[i];
        }
        avg/=s;
        printf("Average is %.2f",avg);
    }
}