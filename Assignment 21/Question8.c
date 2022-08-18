// Write a program to store information of 10 students and display them using structure.

#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int id;
    char name[20];
};

int main()
{
    struct Student s[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("Enter Student Id: ");
        scanf("%d", &s[i].id);
        printf("Enter Student Name: ");
        fflush(stdin);
        fgets(s[i].name, 20, stdin);
        fflush(stdin);
    }

    for (i = 0; i < 10; i++)
    {
        printf("\nID: %d\nName: %s", s[i].id, s[i].name);
    }
    return 0;
}