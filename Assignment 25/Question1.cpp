/* Define a class Complex to represent a complex number. Declare instance member
variables to store real and imaginary part of a complex number, also define instance
member functions to set values of complex number and print values of complex
number */

#include<iostream>

using namespace std;

class Complex{

private:
    int real;
    int img;
public:

    void setValue(int r,int i)
    {
        real=r;
        img=i;
    }

    void getValue()
    {
        cout<<real<<"+"<<img<<"i";
    }
};

int main()
{
    Complex c;
    c.setValue(2,3);
    c.getValue();
    
    return 0;
}