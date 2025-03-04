#include <iostream>
using namespace std;

class Test
{
    mutable int n1;
    const int n2;
    int n3;

    Test() : n2(20)
    {
        n1 = 10;
        n3 = 30;
    }

    void f1()
    {
        n1 = 100; // OK
        // n2 = 200; // NOT OK
        n3 = 300; // OK
    }
    void f2() const
    {
        this->n1 = 100; // OK -> It is mutable
        this->n3 = 300; // NOT OK
    }
    void f3() const
    {
        this->n1 = 100; // OK -> It is mutable

        // const Test *const this
        // Test *const
        const_cast<Test *const>(this)->n3 = 300; // OK
    }
};

int main()
{

    return 0;
}