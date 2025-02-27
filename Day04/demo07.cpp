#include <iostream>
using namespace std;

class Test
{
    int n1;
    int n2;
    static int n;

public:
    Test(int n1, int n2, int n)
    {
        this->n1 = n1;
        this->n2 = n2;
        Test::n = n; // assignment
    }

    void display()
    {
        cout << "n1,n2,n = " << n1 << "," << n2 << "," << n << endl;
    }

    // no this pointer for static member function
    // static member functions do not get this pointer
    // we cannot access non static data members inside static member functions
    static void setN(int value)
    {
        // n1 = n; // NOT OK
        // n2 = n; // NOT OK
        // this->n = n; // NOT OK
        n = value; // OK
    }

    static int getN()
    {
        return n;
    }
};

// initializing the static data member of the class
int Test::n = 10;

int main()
{
    // cout << "Value of n = " << Test::n << endl;
    cout << "Value of n = " << Test::getN() << endl;
    Test::setN(100);
    cout << "After change, Value of n = " << Test::getN() << endl;

    Test t1(2, 3, 4);
    t1.setN(10);
    return 0;
}

int main1()
{
    // cout << Test::n << endl;
    Test t1(2, 3, 4);
    Test t2(5, 6, 7);
    cout << "Size of t1 = " << sizeof(t1) << endl;
    cout << "Size of t2 = " << sizeof(t2) << endl;
    t1.display();
    t2.display();
    // cout << t1.n1 << endl;
    // cout << t1.n2 << endl;

    return 0;
}