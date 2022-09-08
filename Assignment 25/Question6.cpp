// Define a class Square to find the square of a number and write a C++ program to Count number of times a function is called.

#include <iostream>

using namespace std;

class Square
{

private:
    int number;
    static int count;

public:
    void setValue(int n)
    {
        number = n;
    }

    void getSquare()
    {

        Square::count++;
        int sq = number * number;
        cout << "\nSquare of " << number << " is " << sq << endl;
        cout << "Function Call is " << Square::count << " Time";
    }
};

int Square::count = 0;

int main()
{
    Square s;
    s.setValue(6);
    s.getSquare();
    s.getSquare();
    s.getSquare();
    s.getSquare();
    return 0;
}