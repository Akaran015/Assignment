// Create an authentication system. It should be menu driven.

#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char str[5][20] = {"mohit", "jyoti", "simran", "akshu", "amit"};
    char wd1[10];
    int choice, num, i, flag = 0;
    unsigned long int fact;

    while (1)
    {
        printf("1. Authentication system \n");
        printf("2. Exit\n");
        printf("Enter your choice :  ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Please Enter Your Name: ");
            getchar();
            gets(wd1);
            //scanf("%s", wd1);
            for (i = 0; i < 5; i++)
            {
                if (strcmp(str[i], wd1) == 0)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
            {
                printf("Welcome %s\n\n", str[i]);
            }
            else
                printf("You are Not Allowed\n\n");

            break;

        case 2:
            exit(0);
        }
    }
    return 0;
}