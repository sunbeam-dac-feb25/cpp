#include <iostream>
using namespace std;

class Base
{
private:
    int n1;

protected:
    int n2;

public:
    int n3;

    void displayBase()
    {
        cout << n1 << n2 << n3 << endl;
    }

    int getN2()
    {
        return n2;
    }

    int getN1()
    {
        return n1;
    }
    // friend functions
    // are non member functions of the class which gets the
    // access to the private and protected memebrs directly
    // on class object
    // friend functions do not get this pointer
    friend void f2();
    friend class Derived;
};

class Derived : public Base
{
public:
    void displayDerived()
    {
        cout << n1 << endl; // private
        cout << n2 << endl; // OK
        cout << n3 << endl; // OK
    }
};

void f1()
{
    Base b;
    cout << b.getN1() << endl; //  OK
    cout << b.getN2() << endl; //  OK
    cout << b.n3 << endl;      // OK
}

// non member function of the class
void f2()
{
    Base b;
    cout << b.n1 << endl; // NOT OK
    cout << b.n2 << endl; // NOT OK
    cout << b.n3 << endl; // OK
}

int main()
{

    return 0;
}