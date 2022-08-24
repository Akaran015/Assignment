// Write a C++ program to swap values of two int variables without using third variable.

#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cout << "Enter Two Number: ";
    cin >> x>>y;
    cout << "Value before swapping "<<x<<" "<<y;
    x=x+y;
    y=x-y;
    x=x-y;
    cout << "\nValue After swapping "<<x<<" "<<y;
    return 0;
}