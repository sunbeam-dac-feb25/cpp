#include <iostream>
using namespace std;
// operator overloading as a member function
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

    // operator overloading as a member function
    Point operator+(Point &p) // p1 -> this, p2 -> p
    {
        Point result;
        result.x = this->x + p.x;
        result.y = this->y + p.y;
        return result;
    }
};

int main()
{
    Point p1;
    Point p2(2, 3);
    Point p3 = p1 + p2; // p1.operator+(p2)

    p1.display();
    p2.display();
    p3.display();
    return 0;
}