#include <iostream>
using namespace std;

class Time
{
    int hr;
    int min;

public:
    Time()
    {
        cout << "Time()" << endl;
        hr = 10;
        min = 10;
    }
    Time(int hr, int min)
    {
        cout << "Time(int, int)" << endl;
        this->hr = hr;
        this->min = min;
    }

    // Conversion function
    Time(int minutes)
    {
        cout << "Single Parameterized Ctor - Time(int)" << endl;
        hr = minutes / 60;
        min = minutes % 60;
    }

    void display()
    {
        cout << "Time = " << hr << ":" << min << endl;
    }

    // conversion function
    operator int() // this
    {
        cout << "Conversion function called - " << endl;
        int minutes = hr * 60 + min;
        return minutes;
    }
};

int main()
{
    Time t1;         // Parameterless Ctor
    Time t2(120);    // Single Paramaterized
    Time t3(10, 35); // Parameterized ctor

    Time t4; // Parameterless
    int minutes = 120;
    t4 = minutes; // Single  Parameterized Ctor -> Converion Function
    // t4.Time(120)
    // converting the int type of value into the Time Object

    minutes = t3; // conversion function
    // converting the Time object into the int
    // t3.operator int();
    // t1.display();
    // t2.display();
    // t3.display();
    return 0;
}