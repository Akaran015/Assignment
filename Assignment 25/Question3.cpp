// Define a class Factorial and define an instance member function to find the Factorial of a number using class.

#include<iostream>

using namespace std;

class Factorial{

private:
    int fact;
public:

    void setValue(int f)
    {
        fact=f;
    }

    void getfactorial()
    {
        int i,multiple=1;

        for(i=1;i<=fact;i++)
        {
            multiple*=i;
        }

        cout<<"Factoril: "<<multiple;
    }
};

int main()
{
    Factorial f;
    f.setValue(5);
    f.getfactorial();
    
    return 0;
}