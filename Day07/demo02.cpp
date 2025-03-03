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
    Base *bptr = new Derived(); // upcasting

    // It is a process of storing the derived class object in the
    // base class pointer or reference

    bptr->f1();
    bptr->f2();
    // bptr->f3(); // Object Slicing

    Derived *dptr = (Derived *)bptr; // Downcasting
    dptr->f1();
    dptr->f2();
    dptr->f3();
    return 0;
}