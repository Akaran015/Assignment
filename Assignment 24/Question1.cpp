// Define a function to check whether a given number is a Prime number or not.

#include<iostream>
using namespace std;

void prime(int a)
{
    int flag=0;
    for(int i=2;i<=a/2;i++)
    {
        if(a%i==0)
        {
            flag=1;
            break;
        }
    }
        if(flag==0)
            cout<<"Number is Prime ";
        else
            cout<<"Number is Not prime ";

}

int main()
{
    int x;
    cout<<"Enter the Number: ";
    cin>>x;
    prime(x);
    return 0;
}