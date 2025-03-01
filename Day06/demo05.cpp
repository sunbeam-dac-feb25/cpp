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
};

// If mode of inheritance is private all the base class memebers
// are made as private within the derived class
// If mode of inheritance is protected the public base class memebers
// are made as protected within the derived class
// If mode of inheritance is public no changes is done to the
// base class memebrs inside the derived class
class Dervied : public Base
{
public:
    void displayDerived()
    {
        cout << n1 << n2 << n3 << endl;
    }
};

// If the above direct derived class is using private mode of inheritace
// we cannot access any memebrs of the base class inherited in  above derived class
// If the above direct derived class is using protected/public mode of inheritace
// we can access only the protected & public memebrs of the base class inherited in  above derived class
class InDirect : Dervied
{
public:
    void displayIndirect()
    {
        cout << n1 << n2 << n3 << endl;
    }
};

int main()
{
    Base b;
    b.n1; // NOT OK;
    b.n2; // NOT OK;
    b.n3; // OK;

    // If the derived class is using private/protected mode of inheritace
    // we cannot access any memebrs of the base class inherited in derived class

    // If the derived class is using public mode of inheritace
    // we can access only public memebrs of the base class inherited in derived class

    Dervied d;
    d.n1; // NOT OK
    d.n2; // NOT OK
    d.n3; // OK
    return 0;
}