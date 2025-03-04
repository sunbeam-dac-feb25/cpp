#include <iostream>
using namespace std;

class Base
{
    int *ptr1;

public:
    Base()
    {
        ptr1 = new int(10);
    }
    virtual ~Base()
    {
        cout << "~Base()" << endl;
        delete ptr1;
        ptr1 = NULL;
    }
};

class Derived : public Base
{
    int *ptr2;

public:
    Derived()
    {
        ptr2 = new int(20);
    }
    ~Derived()
    {
        cout << "~Derived()" << endl;
        delete ptr2;
        ptr2 = NULL;
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