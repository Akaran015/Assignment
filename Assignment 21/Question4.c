// Write a function to find the highest salary employee from a given array of 10 employees.

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
    struct Employee e[10];
    int i;
    for(i=0;i<10;i++)
    {
    printf("Enter Employee Id: ");
    scanf("%d", &e[i].id);
    printf("Enter Employee Name: ");
    fflush(stdin);
    fgets(e[i].name, 20, stdin);
    fflush(stdin);
    printf("Enter Employee salary: ");
    scanf("%f", &e[i].salary);

    }

    float x=e[0].salary;
    for(i=1;i<10;i++)
    {
        if(x<e[i].salary)
            x=e[i].salary;
    }
    printf("Max Employee Salary is %.2f: ",x);

    return 0;
}
