// Define overloaded functions to calculate area of circle, area of rectangle and area of triangle.

#include <iostream>
using namespace std;
void Area(float);
void Area(int,int);
void Area(float,float);

void Area(float r)
{
    float ca=3.14*r*r;
    cout<<"Area of Circle "<<ca<<endl;
}

void Area(int l,int b)
{
    int ra=l*b;
    cout<<"Area of Rectangle "<<ra<<endl;
}

void Area(float b,float h)
{
    float ta=(b*h)/2;
    cout<<"Area of Triangle "<<ta<<endl;
}
int main()
{
    Area(2.3);
    Area(2,3);
    Area(3,5);
    return 0;
}