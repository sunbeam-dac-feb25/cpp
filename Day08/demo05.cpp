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
class Derived
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
    Base *bptr = new Base();
    bptr->f1();
    bptr->f2();

    // Derived *dptr = static_cast<Derived *>(bptr); // NOT OK
    Derived *dptr = reinterpret_cast<Derived *>(bptr);
    return 0;
}