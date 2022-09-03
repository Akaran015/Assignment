// Write functions using function overloading to add two numbers having different data types.

#include <iostream>
using namespace std;

void Add(int a, int b)
{
    cout << "Addition of " << a << " and " << b <<" is "<< a + b << endl;
}

void Add(double a, double b)
{
    cout << "Addition of " << a << " and " << b <<" is "<< a + b << endl;
}

void Add(int a, double b)
{
    cout << "Addition of " << a << " and " << b <<" is "<< a + b << endl;
}

void Add(double a, int b)
{
    cout << "Addition of " << a << " and " << b <<" is "<< a + b << endl;
}
int main()
{
    Add(3, 2);
    Add(4.5, 6.7);
    Add(5, 6.7);
    Add(8.9, 12);
    return 0;
}