// Write a program to input and print text using dynamic memory allocation.


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
    int x,i;
    printf("Enter Length of String: ");
    scanf("%d", &x);

    char *p = (char *)malloc(sizeof(char) * x);
    if (p == NULL)
    {
        printf("Memory Not Allocated Successfully!");
        exit(0);
    }
    else
    {
        fflush(stdin);
        fgets(p,30,stdin);
        printf("String :%s",p);
    }
}