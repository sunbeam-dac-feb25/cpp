#include <iostream>
// Constant
using namespace std;

class Test
{
private:
    int n1;
    const int n2;

public:
    // constant data members must be initialized inside
    // ctor members initailizer list
    Test() : n2(20)
    {
        n1 = 10;
    }
    void setN1(int n1)
    {
        this->n1 = n1;
    }
    int getN1() const // const Test *const this;
    {
        return n1;
    }

    void display() const //  Test *const this;
    {
        cout << "n1 = " << n1 << endl;
        cout << "n2 = " << n2 << endl;
    }
};

int main()
{
    Test t1;
    t1.display();
    t1.setN1(100);
    cout << "Value of n1 = " << t1.getN1() << endl;

    const Test t2;
    t2.display();
    // t2.setN1(100); // the member function is non constant
    cout << "Value of n1 = " << t2.getN1() << endl;

    return 0;
}