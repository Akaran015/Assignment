// Define a function to find the highest value digit in a given number.

#include<iostream>
using namespace std;

void Highest(int a)
{
    int rem,temp,highest=0;
    while(a)
    {
        temp=a%10;
        if(highest<temp)
            highest=temp;
        a=a/10;

    }

    cout<<"The Highest value digit in a given number is "<<highest;
}

int main()
{
    int x;
    cout<<"Enter the Number: ";
    cin>>x;
    Highest(x);
    return 0;
}