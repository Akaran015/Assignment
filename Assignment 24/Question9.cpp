// Write functions using function overloading to find a maximum of two numbers and both the numbers can be integer or real.

#include <iostream>
using namespace std;


void Max(int a,int b)
{
    if(a>b)
        cout<<a<<" is Greater than "<<b<<endl;
    else
        cout<<b<<" is Greater than "<<a<<endl;
}

void Max(double a,double b)
{
    if(a>b)
        cout<<a<<" is Greater than "<<b<<endl;
    else
        cout<<b<<" is Greater than "<<a<<endl;
}

void Max(int a,double b)
{
    if(a>b)
        cout<<a<<" is Greater than "<<b<<endl;
    else
        cout<<b<<" is Greater than "<<a<<endl;
}

void Max(double a,int b)
{
    if(a>b)
        cout<<a<<" is Greater than "<<b<<endl;
    else
        cout<<b<<" is Greater than "<<a<<endl;
}
int main()
{
    Max(3,2);
    Max(4.5,6.7);
    Max(5,6.7);
    Max(8.9,12);
    return 0;
}