#include <iostream>
using namespace std;

class Point
{
    int x;
    int y;

public:
    Point()
    {
        cout << "Point() ctor" << endl;
        x = 1;
        y = 1;
    }

    Point(int x, int y)
    {
        cout << "Point(int,int) ctor" << endl;
        this->x = x;
        this->y = y;
    }

    void setX(int x)
    {
        this->x = x;
    }

    void setY(int y)
    {
        this->y = y;
    }

    void display()
    {
        cout << "Point (" << x << "," << y << ")" << endl;
    }
};

int main()
{
    Point p1;       // parameterless
    Point p2(2, 3); // parameterized
    Point p3 = p2;  // default copy ctor
    // shallow copy

    p2.display();
    p3.display();

    p3.setY(5);
    cout << "After change in p3 - " << endl;
    p2.display();
    p3.display();
    return 0;
}