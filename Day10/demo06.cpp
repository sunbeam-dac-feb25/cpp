#include <iostream>
using namespace std;

class Outer
{
    int n3;
    static int n4;

public:
    // nested class
    class Inner
    {
        int n1;
        static int n2;

    public:
        void f1()
        {
            cout << n1 << endl;
            cout << n2 << endl;
            cout << n3 << endl; // NOT OK
            cout << n4 << endl;
        }
        static void f2()
        {
            cout << n1 << endl; // NOT OK
            cout << n2 << endl;
            cout << n3 << endl; // NOT OK
            cout << n4 << endl;
        }
    };
};
int main()
{
    Outer o1;
    Outer::Inner i1;
    i1.f1();
    Outer::Inner::f2();
    return 0;
}