// Define a class Circle and define an instance member function to find the area of the circle.

#include <iostream>
#define PI 3.14;

using namespace std;

class Circle
{

private:
    int radius;

public:
    void setValue(int r)
    {
        radius=r;
    }

    void getArea()
    {
        float a;
        a = radius*radius*PI;

        cout << "Area of Circle " << a;
    }
};

int main()
{
    Circle c;
    c.setValue(5);
    c.getArea();

    return 0;
}