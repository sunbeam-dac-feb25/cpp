#include <iostream>
#include <memory>
using namespace std;
class Time
{
    int hr;
    int min;

public:
    Time()
    {
        cout << "Time() Ctor" << endl;
        hr = 10;
        min = 10;
    }
    ~Time()
    {
        cout << "~Time() Dtor" << endl;
    }

    void displayTime()
    {
        cout << "Time = " << hr << ":" << min << endl;
    }
};

void f1(shared_ptr<Time> s2)
{
    s2->displayTime();
}

int main()
{
    unique_ptr<Time> u1(new Time());
    // unique_ptr<Time> u2 = u1; // NOT OK

    shared_ptr<Time> s1(new Time());
    shared_ptr<Time> s2 = s1; // OK
    f1(s1);
    return 0;
}
