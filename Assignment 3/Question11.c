// Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed.

#include <stdio.h>
int main()
{
    int phy,chem,math,eng,bio;

    printf("Enter Physics Marks:");
    scanf("%d",&phy);
    printf("Enter Chemistry Marks:");
    scanf("%d",&chem);
    printf("Enter Maths Marks:");
    scanf("%d",&math);
    printf("Enter English Marks:");
    scanf("%d",&eng);
    printf("Enter Biology Marks:");
    scanf("%d",&bio);

    if(phy>=33 && chem >=33 && math >=33 && eng >=33 && bio>=33)
        printf("Candidate passed the examination");
    else
        printf("Candidate failed the examination");

    
    return 0;
}