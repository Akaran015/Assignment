// Define a class Rectangle and define an instance member function to find the area of the rectangle.

#include <iostream>

using namespace std;

class Rectangle
{

private:
    int length;
    int breadth;

public:
    void setValue(int l, int b)
    {
        length = l;
        breadth = b;
    }

    void getArea()
    {
        int a;
        a = length * breadth;

        cout << "Area of Reactangle " << a;
    }
};

int main()
{
    Rectangle r;
    r.setValue(5, 6);
    r.getArea();

    return 0;
}