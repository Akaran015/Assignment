// Write a C++ program to calculate an average of 3 numbers.

#include <iostream>

using namespace std;

int main()
{
    int x,y,z,avg;
    cout << "Enter Three Number: ";
    cin>>x>>y>>z;
    avg=x+y+z;
    avg/=3;
    cout << "Average of 3 numbers is : "<<avg;
    return 0;
}