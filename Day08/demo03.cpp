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
    Base *bptr = new Derived();
    bptr->f1();
    bptr->f2();

    // Derived *dptr = (Derived *)bptr; // Downcasting
    Derived *dptr = dynamic_cast<Derived *>(bptr); // Downcasting
    // dynamic cast only works if the classes are  polymorphic
    // the classses that have atleast 1 virtual function are called
    // as polymorphic classes
    // If downcasting fails in dynamic_cast then it returns null
    dptr->f3();
    return 0;
}