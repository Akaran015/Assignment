/* Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
number of instance member variables and also define instance member functions to
set values for time and display values of time. */

 #include<iostream>

using namespace std;

class Time{

private:
    int hour;
    int minute;
    int second;
public:

    void setTime(int h,int m,int s)
    {
        hour=h;
        minute=m;
        second=s;
    }

    void getTime()
    {
        cout<<hour<<"hr"<<" "<<minute<<"min"<<" "<<second<<"sec";
    }
};

int main()
{
    Time t;
    t.setTime(5,34,12);
    t.getTime();
    
    return 0;
}