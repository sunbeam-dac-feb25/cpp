#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout << "Base()" << endl;
    }
    virtual ~Base()
    {
        cout << "~Base()" << endl;
    }
};
class Derived : public Base
{
public:
    Derived()
    {
        cout << "Derived()" << endl;
    }
    ~Derived()
    {
        cout << "~Derived()" << endl;
    }
};
int main()
{
    // Base b;
    // Derived d;

    // Base *bptr = new Base();
    // delete bptr;

    // Derived *dptr = new Derived();
    // delete dptr;

    Base *bptr = new Derived();
    delete bptr;
    return 0;
}