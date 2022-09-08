// Define a class Area and define instance member functions to find the area of the different shapes like square, rectangle , circle etc.

#include <iostream>
#define PI 3.14;

using namespace std;

class Area
{

public:
    void getSquareArea(int side)
    {
        int a;
        a = side * side;

        cout << "\nArea of Square " << a;
    }

    void getCircleArea(float radius)
    {
        float a;
        a = radius * radius * PI;

        cout << "\nArea of Circle " << a;
    }

    void getReactangleArea(int length, int breadth)
    {
        int a;
        a = length * breadth;

        cout << "\nArea of Reactangle " << a;
    }
};

int main()
{
    Area a;

    a.getSquareArea(4);
    a.getCircleArea(3.2);
    a.getReactangleArea(4, 7);

    return 0;
}