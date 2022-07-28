#include <stdio.h>

int main()
{
    int year=2016;

    switch(year%100==0)
    {
        case 1:
                switch (year%400==0)
                {
                case 1:
                    printf("Leap Year");
                    break;
                case 0:
                    printf("Non Leap Year");
                    break;
                }
                break;
        case 0:
                switch (year%4==0)
                {
                case 1:
                    printf("Leap Year");
                    break;
                case 0:
                    printf("Non Leap Year");
                    break;
                }
                break;
    }
    return 0;
}