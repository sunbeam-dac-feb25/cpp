#include <iostream>
using namespace std;
class Base
{
public:
    void f1()
    {
        cout << "Base::f1()" << endl;
    }
    virtual void f2()
    {
        cout << "Base::f2()" << endl;
    }
};

class Derived : public Base
{
public:
    // function overriding
    // Redefining the function of the base class once again
    // in the derived class with same name and signature
    // is called as function overriding
    void f2()
    {
        cout << "Derived::f2()" << endl;
    }

    void f3()
    {
        cout << "Derived::f3()" << endl;
    }
};
int main()
{

    Base *bptr = new Derived(); // upcasting
    bptr->f2();                 // Derived::f2() // Late Binding

    return 0;
}