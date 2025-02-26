#include <iostream>
using namespace std;

class Test
{
    int x;
    int y;

public:
    // ctor members initializer list
    // parameterless ctor
    Test() : x(5), y(x++)
    {
        // y = x++;
        // x = 5;
    }

    // parameterized ctor
    Test(int x, int y) : x(x), y(y)
    {
        this->x = 10;
    }
    void display()
    {
        cout << "(x,y) = (" << x << "," << y << ")" << endl;
    }
};

int main()
{
    Test t1;
    t1.display();

    Test t2(7, 8);
    t2.display();

    Test t3(8, 9);
    t3.display();
    return 0;
}