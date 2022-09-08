// Define a class ReverseNumber and define an instance member function to find Reverse of a Number using class.

#include <iostream>

using namespace std;

class ReverseNumber
{

private:
    int number;

public:
    void setValue(int n)
    {
        number = n;
    }

    void getReverseNumber()
    {
        while (number)
        {
            int r = number % 10;
            cout << r;
            number /= 10;
        }
    }
};

int main()
{
    ReverseNumber r;
    r.setValue(12345);
    r.getReverseNumber();

    return 0;
}