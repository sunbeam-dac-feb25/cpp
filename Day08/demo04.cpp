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

    // cout << "Type of bptr = " << typeid(bptr).name() << endl;
    // cout << "Type of *bptr = " << typeid(*bptr).name() << endl;

    // Derived *dptr = dynamic_cast<Derived *>(bptr); // NOT OK
    Derived *dptr = static_cast<Derived *>(bptr); // OK
    // Used to do the downcasting when classes are not polymorphic
    // Here the developers are 100% sure that the upcasting is done
    dptr->f3();
    return 0;
}