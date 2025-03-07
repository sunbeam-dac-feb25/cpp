#include <iostream>
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

template <class T>
class SmartPtr
{
    T *ptr;

public:
    SmartPtr(T *ptr)
    {
        this->ptr = ptr;
    }

    // T *getPtr()
    // {
    //     return ptr;
    // }

    T *operator->()
    {
        return ptr;
    }

    ~SmartPtr()
    {
        delete this->ptr;
    }
};

int main()
{

    SmartPtr<Time> s1(new Time());
    SmartPtr<Time> s2(new Time());
    SmartPtr<Time> s3(new Time());
    SmartPtr<Time> s4(new Time());
    SmartPtr<Time> s5(new Time());
    SmartPtr<Time> s6(new Time());

    // Time *t = s1.getPtr();
    // t->displayTime();

    // s1.getPtr()->displayTime();

    s1->displayTime(); // s1.operator->()
    return 0;
}

int main1()
{
    Time *t1 = new Time();
    t1->displayTime();

    Time *t2 = new Time();
    Time *t3 = new Time();
    Time *t4 = new Time();
    Time *t5 = new Time();
    Time *t6 = new Time();

    delete t1;
    delete t2;
    delete t3;
    delete t4;
    delete t5;
    delete t6;
    return 0;
}
