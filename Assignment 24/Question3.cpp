// Define a function to calculate x raised to the power y.

#include<iostream>
using namespace std;

void power(int a,int b)
{
    int i,power=1;
    
    for(int i=1;i<=b;i++)
        power*=a;

    cout<<a <<" raised to the power "<<b<<" "<<power;
}

int main()
{
    int x,y;
    cout<<"Enter the Number: ";
    cin>>x;
    cout<<"Enter the Power: ";
    cin>>y;
    power(x,y);
    return 0;
}