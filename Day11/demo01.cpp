#include <iostream>
using namespace std;
// Arithmetic Operator Overloading
// operator overloading as a non member function
class Point
{
    int x;
    int y;

public:
    Point()
    {
        x = 1;
        y = 1;
    }

    Point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    void display()
    {
        cout << "Point (" << x << "," << y << ")" << endl;
    }

    friend Point operator+(Point &p1, Point &p2);

    // member function
};

// non-member function
// overload the `+` operator
Point operator+(Point &p1, Point &p2)
{
    Point p3;
    p3.x = p1.x + p2.x;
    p3.y = p1.y + p2.y;
    return p3;
}

int main()
{
    Point p1;
    Point p2(2, 3);
    Point p3 = p1 + p2; // operator+(p1,p2);

    p1.display();
    p2.display();
    p3.display();
    return 0;
}