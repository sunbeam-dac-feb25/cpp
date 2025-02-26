#include <iostream>
using namespace std;

class Point
{
    int x;
    int y;
    int z;

public:
    Point() : Point(1) // : Point(1, 1) // Ctor Delegation
    {
    }

    Point(int value) : Point(value, value) {}

    Point(int x, int y)
    {
        cout << "Inside Parameterized ctor" << endl;
        this->x = x;
        this->y = y;
    }

    void display()
    {
        cout << "Point = (" << x << "," << y << ")" << endl;
    }
};

int main()
{
    Point p1;
    p1.display();

    Point p2(3);
    p2.display();

    Point p3(2, 4);
    p3.display();
    return 0;
}