//Write a program to check whether roots of a given quadratic equa0tion are real & distinct, real & equal or imaginary roots

#include <math.h>
#include <stdio.h>
int main() {
    int a, b, c, discriminant;
    float root1, root2;
    printf("Enter coefficients x^2, x and constant term: ");
    scanf("%d %d %d", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant < 0) {
        printf("Both roots are Imaginary");
    }
    
    if (discriminant == 0) {
        printf("Both roots are Equal");
        root1=-b/(2.0*a);
        printf("\n Root1 are %.2f ",root1);
    }

    if (discriminant > 0) {
        printf("Roots are Real & Distinct");
        root1=(-b+sqrt(discriminant))/(2*a);
        root2=(-b-sqrt(discriminant))/(2*a);
        printf("\n Roots are %.2f %.2f",root1,root2);

    }

    return 0;
} 
