#include <iostream>
using namespace std;

class Point
{
    int *xptr;
    int *yptr;

public:
    Point()
    {
        cout << "Point() ctor" << endl;
        xptr = new int(1);
        yptr = new int(1);
    }

    Point(int x, int y)
    {
        cout << "Point(int,int) ctor" << endl;
        xptr = new int(x);
        yptr = new int(y);
    }

    void setX(int x)
    {
        *xptr = x;
    }

    void setY(int y)
    {
        *yptr = y;
    }

    void display()
    {
        cout << "Point (" << *xptr << "," << *yptr << ")" << endl;
    }

    ~Point()
    {
        delete xptr;
        delete yptr;
    }
};

int main()
{
    Point p1;       // parameterless
    Point p2(2, 3); // parameterized
    Point p3 = p2;  // default copy ctor
    //  shallow copy

    p2.display();
    p3.display();

    p3.setY(5);
    cout << "After change in p3 - " << endl;
    p2.display();
    p3.display();

    cout << "Program finished" << endl;
    return 0;
}