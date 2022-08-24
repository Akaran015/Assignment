// Write a function to take input employee data from the user.

#include<stdio.h>

struct Employee
{
    int id;
    char name[20];
    float salary;
};

int main()
{
    struct Employee e;
    printf("Enter Employee Id: ");
    scanf("%d",&e.id);
    printf("Enter Employee Name: ");
    gets(e.name);
    printf("Enter Employee salary: ");
    scanf("%f",&e.salary);

    printf("ID: %d, Name: %s, Salary: %.2f",e.id,e.name,e.salary);
    return 0;

}