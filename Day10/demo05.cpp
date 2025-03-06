#include <iostream>
using namespace std;

int n4;

int f1()
{
    int n3;
    class Local
    {
        int n1;
        static int n2; // NO we cannot declare static data member inside local class

    public:
        void f1()
        {
            cout << n3 << endl; // NO
            cout << n4 << endl; // NO
            cout << "f1()" << endl;
        }

        static void f2()
        {
            cout << "f2()" << endl;
        }
    };
    Local t1;
    Local::f2();
}
int main()
{
    f1();

    return 0;
}
// We cannot make local class as static
// we cannot declare data memebrs in local class as static
//