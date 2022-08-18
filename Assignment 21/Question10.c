/* Write a program to enter the marks of 5 students in Chemistry, Mathematics and
Physics (each out of 100) using a structure named Marks having elements roll no.,
name, chem_marks, maths_marks and phy_marks and then display the percentage
of each student. */

#include <stdio.h>
#include <stdlib.h>

struct Marks
{
    int roll_no;
    char name[10];
    int chem_marks; 
    int maths_marks;
    int phy_marks;
};

int main()
{

    struct Marks s[5];
    int i;
    float per,total;


    for (i = 0; i < 2; i++)
    {
        printf("Enter Student Roll No: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter Student Name: ");
        fflush(stdin);
        fgets(s[i].name, 20, stdin);

        printf("Enter Student Chemistry Marks: ");
        scanf("%d", &s[i].chem_marks);

        printf("Enter Student Maths Marks: ");
        scanf("%d", &s[i].maths_marks);

        printf("Enter Student Physics Marks: ");
        scanf("%d", &s[i].phy_marks);

    }

    for (i = 0; i < 2; i++)
    {
        printf("\nID: %d\nName: %sChemistry Marks: %d\nMaths Marks: %d\nPhysics Marks: %d", s[i].roll_no, s[i].name,s[i].chem_marks,s[i].maths_marks,s[i].phy_marks);
        total=(s[i].chem_marks+s[i].maths_marks+s[i].phy_marks);
        per=((total/300)*100);
        printf("\nPercentage: %.2f",per);
    }
    return 0;
}