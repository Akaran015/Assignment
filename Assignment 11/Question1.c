#include <stdio.h>

int LCM(int, int);

int main() {
    int n1, n2, l;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    l = LCM(n1, n2);

    printf("The LCM of %d and %d is %d.", n1, n2, l);
}

    int LCM(int n1, int n2)
    {
        int max;

        max = (n1 > n2) ? n1 : n2;

        while (1) {
            if (max % n1 == 0 && max % n2 == 0) {
                return max;       
                break;
            }
            ++max;
        }
        
    }