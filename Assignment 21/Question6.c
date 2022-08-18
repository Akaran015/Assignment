// Write a function to sort employees according to their names.

#include <stdio.h>
#include <string.h>

struct Employee
{
    int id;
    char name[20];
    float salary;
};
void Display(struct Employee f);

int main()
{
    struct Employee e[3];
    int i, j;
    for (i = 0; i < 3; i++)
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

    struct Employee temp;
    for (i = 0; i < 3; i++)
        for (j = i+1; j < 3; j++)
        {
            if (strcmp(e[i].name,e[j].name)>0)
            {

                temp = e[i];
                e[i] = e[j];
                e[j] = temp;
            }
        }

for (i = 0; i < 3; i++)
    printf("\nID: %d\nName: %sSalary: %.2f", e[i].id, e[i].name, e[i].salary);

return 0;
}
