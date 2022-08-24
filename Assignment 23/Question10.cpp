// Write a C++ program to add all the numbers of an array of size 10.

#include <iostream>

using namespace std;

int main()
{
    int i,sum=0;
    int a[10];
    cout << "Enter 10 Number: ";
    for(i=0;i<10;i++)
        cin >> a[i];
    for(i=0;i<10;i++)
        sum+=a[i];

    cout << "Sum of the numbers of an array of size 10 is "<<sum;
    
    return 0;
}