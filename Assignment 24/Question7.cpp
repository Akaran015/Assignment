// Write a function using the default argument that is able to add 2 or 3 numbers.

#include <iostream>
using namespace std;
int Add(int, int, int);

int Add(int a, int b = 0, int c = 0)
{
    return a + b + c;
}

int main()
{
    cout << "Sum of one Input is " << Add(10) << endl;
    cout << "Sum of two Input is " << Add(10, 20) << endl;
    cout << "Sum of three Input is " << Add(10, 20, 30) << endl;
    return 0;
}