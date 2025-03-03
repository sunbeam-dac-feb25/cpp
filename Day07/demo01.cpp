#include <iostream>
using namespace std;
class Base
{
public:
    void f1()
    {
        cout << "Base::f1()" << endl;
    }
    void f2()
    {
        cout << "Base::f2()" << endl;
    }
};

class Derived : public Base
{
public:
    void f3()
    {
        cout << "Derived::f3()" << endl;
    }
};
int main()
{
    Base b;
    b.f1();
    b.f2();
    // b.f3(); // NOT OK as f3 is a derived class fun and is not inhertied in base

    Derived d;
    d.f1();
    d.f2();
    d.f3();
    return 0;
}