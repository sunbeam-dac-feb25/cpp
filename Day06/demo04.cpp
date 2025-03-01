#include <iostream>
using namespace std;

class Base // parent
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
};

class Dervied : Base
{
public:
    void displayDerived()
    {
        cout << n1 << n2 << n3 << endl;
    }
};

int main()
{
    Base b;
    b.n1; // NOT OK
    b.n2; // NOT OK
    b.n3; // OK

    Dervied d;
    cout << "Size of derived class = " << sizeof(d) << endl;
    // d.displayDerived();

    return 0;
}