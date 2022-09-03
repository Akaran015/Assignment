// Define a function to swap data of two int variables using call by reference

#include<iostream>
using namespace std;

void swap(int &a,int &b)
{
    int temp;

    temp=a;
    a=b;
    b=temp;
    
    cout<<"After Swapping a: "<<a<<" b: "<<b; 
}

int main()
{
    int x,y;
    cout<<"Enter the Number1: ";
    cin>>x;
    cout<<"Enter the Number2: ";
    cin>>y;
    cout<<"Before Swapping a: "<<x<<" b: "<<y<<endl;
    swap(x,y);
    return 0;
}