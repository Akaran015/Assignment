// Define a structure Employee with member variables id, name, salary.

#include<stdio.h>

struct Employee
{
    int id;
    char name[20];
    float salary;
};

int main()
{
    struct Employee e={1,"mohit",23.3};
    printf("ID: %d, Name: %s, Salary: %.2f",e.id,e.name,e.salary);
    return 0;

}