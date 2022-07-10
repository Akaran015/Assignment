#include<stdio.h>
#define PI 3.14
int main()
{
    float r,area;
    printf("Enter the Radius of the Circle:");
    scanf("%f",&r);
    area=PI*r*r;
    printf("Area of circle is %.2f having the radius %.2f",area,r);
    return 0;
}