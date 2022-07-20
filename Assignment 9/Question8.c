#include <stdio.h>

int main()
{
    int num,new;

    printf("Enter any number: ");
    scanf("%d", &num);

    switch (num > 0)
    {
        case 1:
            new=-num;
            printf("Positive number %d is converted into Negative number %d.",num,new);
        break;

        case 0:
            switch (num < 0)
            {
                case 1: 
                    new=-num;
                    printf("Negative number %d is converted into Positive number %d.", num,new);
                    break;
                case 0:
                    printf("%d is zero.", num);
                    break;
            }
        break;
        
    }

    return 0;
}