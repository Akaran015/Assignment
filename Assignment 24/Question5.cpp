// Define a function to check whether a given number is a term in a Fibonacci series or not.

#include <iostream>
using namespace std;

void Fib(int a)
{
    int n1 = 0, n2 = 1, fib;
    if (n1 == a)
        cout << "Number is a term in a Fibonacci series";
    else if (n2 == a)
        cout << "Number is a term in a Fibonacci series";
    else
    {
        while (1)
        {
            fib = n1 + n2;
            n1 = n2;
            n2 = fib;

            if (a == fib)
            {   cout << "Number is a term in a Fibonacci series";
                break;
            }
            else if (fib > a)
            {
                cout << "Number is Not a term in a Fibonacci series";
                break;
            }
        }
    }
}

int main()
{
    int x;
    cout << "Enter the Number: ";
    cin >> x;
    Fib(x);
    return 0;
}