#include <iostream>
using namespace std;

class A
{
public:
    int n1;
    A()
    {
        cout << "A() ctor" << endl;
        n1 = 10;
    }
    void displayA()
    {
        cout << "n1 = " << n1 << endl;
    }
};

class B : virtual public A
{
public:
    int n2;
    B()
    {
        cout << "B() ctor" << endl;
        n2 = 10;
    }
    void displayB()
    {
        cout << "n1, n2 = " << n1 << "," << n2 << endl;
    }
};

class C : virtual public A
{
public:
    int n3;
    C()
    {
        cout << "C() ctor" << endl;
        n3 = 10;
    }
    void displayC()
    {
        cout << "n1,  n3= " << n1 << "," << n3 << endl;
    }
};

class D : public B, public C
{
public:
    int n4;
    D()
    {
        cout << "D() ctor" << endl;
        n4 = 40;
    }
    void displayD()
    {
        cout << n1 << n2 << n3 << n4 << endl;
    }
};

int main()
{
    A a;
    // B b;
    // C c;
    // D d;

    cout << "Size of a = " << sizeof(a) << endl;
    return 0;
}