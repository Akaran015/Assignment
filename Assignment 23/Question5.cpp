// Write a C++ program to calculate the volume of a cuboid.

#include <iostream>

using namespace std;

int main()
{
    float w,h,l,vol;
    cout << "Enter Width of cuboid: ";
    cin>>w;
    cout << "Enter Height of cuboid: ";
    cin>>h;
    cout << "Enter Length of cuboid: ";
    cin>>l;

    vol=w*h*l;

    cout << "The volume of a cuboid is "<<vol;
    return 0;
}