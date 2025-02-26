#include <iostream>
using namespace std;

class Time
{
private:
    int hr;
    int min;

public:
    // Parameterless constructor
    Time()
    {
        cout << "Inside Parameterless Constructor" << endl;
        this->hr = 10;
        min = 10;
    }

    // Parameterized Constructor
    Time(int hr, int min)
    {
        cout << "Inside Parameterized Constructor" << endl;
        this->hr = hr;
        this->min = min;
    }
    Time(int value)
    {
        cout << "Inside Single Parameterized Constructor" << endl;
        hr = value;
        min = value;
    }

    void initTime()
    {
        cout << "Init Function called" << endl;
        hr = 10;
        min = 10;
    }

    void display()
    {
        cout << "Time = " << hr << ":" << min << endl;
    }
};

int main()
{
    Time t1;         // parameterless -> t1.Time()
    Time t2(11, 30); // parameterized
    Time t3(11);
    Time t4(12, 20);

    t1.display();
    t2.display();
    t3.display();
    return 0;
}

int main1()
{
    Time t1;
    Time t2;
    Time t3;

    // t1.initTime();
    // t2.initTime();
    // t3.initTime();

    t1.display();
    t2.display();
    t3.display();

    Time t4(11, 30);
    return 0;
}