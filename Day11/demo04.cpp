#include <iostream>
using namespace std;
// Assignment Operator Overloading
class Point
{
    int x;
    int y;

public:
    Point()
    {
        cout << "Parameterless ctor" << endl;
        x = 1;
        y = 1;
    }

    Point(int x, int y)
    {
        cout << "Parameterized ctor" << endl;
        this->x = x;
        this->y = y;
    }

    Point(Point &ref)
    {
        cout << "Copy Ctor" << endl;
        this->x = ref.x;
        this->y = ref.y;
    }

    void display()
    {
        cout << "Point (" << x << "," << y << ")" << endl;
    }

    void operator=(Point &ref) // this-> p3, ref-> p2
    {
        cout << "Assignment Operator overloading " << endl;
        this->x = ref.x;
        this->y = ref.y;
    }
};

int main()
{
    Point p1;
    Point p2(2, 3);
    // Point p3 = p2; // Initialization
    Point p3;
    p3 = p2; // Assignment // p3.operator=(p2)

    // Default Assignment Operator function
    //  Default Assigment operator does Shallow copy

    p1.display();
    p2.display();
    p3.display();
    return 0;
}