// Write a C++ program to find the maximum of two numbers.

#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cout << "Enter Two Number: ";
    cin >> x>>y;
    if(x>y)
        cout <<x<<" is Greater";
    else
        cout <<y<<" is Greater";
    
    return 0;
}