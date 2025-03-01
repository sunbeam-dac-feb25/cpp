#include <iostream>
using namespace std;

class Base // parent
{
public:
    int n1;
    Base()
    {
        cout << "Base class Ctor" << endl;
        n1 = 10;
    }
    void displayBase()
    {
        cout << "n1 = " << n1 << endl;
    }
};

// inheritance
// Base class is inherited into the Derived class
class Dervied : Base
{
public:
    int n2;
    Dervied()
    {
        cout << "Derived class ctor " << endl;
        n2 = 20;
    }
    void displayDerived()
    {
        cout << "n2 = " << n2 << endl;
        displayBase();
    }
};

int main()
{
    // Base b;
    //   cout << "Size of base class = " << sizeof(b) << endl;
    // b.displayBase();

    Dervied d;
    //  cout << "Size of derived class = " << sizeof(d) << endl;
    d.displayDerived();

    return 0;
}