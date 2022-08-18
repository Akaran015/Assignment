// Write a function to display employee data.

#include <stdio.h>
#include<stdlib.h>

struct Employee
{
    int id;
    char name[20];
    float salary;
};
void Display(struct Employee f);

int main()
{
    struct Employee e;
    printf("Enter Employee Id: ");
    scanf("%d", &e.id);
    printf("Enter Employee Name: ");
    fflush(stdin);
    fgets(e.name, 20, stdin);
    fflush(stdin);
    printf("Enter Employee salary: ");
    scanf("%f", &e.salary);

    Display(e);
    return 0;
}

void Display(struct Employee f)
{
    printf("ID: %d, Name: %s , Salary: %.2f", f.id, f.name, f.salary);
}