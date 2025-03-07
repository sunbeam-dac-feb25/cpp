#include <iostream>
using namespace std;
// function call operator overloading
// function objects OR functors
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

    void operator()(int minutes)
    {
        cout << "operator() called" << endl;
        hr = minutes / 60;
        min = minutes % 60;
    }

    void display()
    {
        cout << "Time = " << hr << ":" << min << endl;
    }
};

void f4()
{
}
int main()
{
    Time t1;
    Time t2(11, 20);
    Time t4;

    t4(130); // t4.operator()(130);
    f4();

    t1.display();
    t2.display();
    t4.display();
    return 0;
}