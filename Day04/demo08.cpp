#include <iostream>
using namespace std;

class Circle
{
    double radius;
    const static double PI;

public:
    Circle(double radius)
    {
        this->radius = radius;
    }

    void calculateArea()
    {
        cout << "Ares of circle = " << PI * radius * radius << endl;
    }
};

const double Circle::PI = 3.14;

int main()
{
    Circle c1(5);
    Circle c2(7);
    Circle c3(9);
    c1.calculateArea();
    c2.calculateArea();
    c3.calculateArea();
    return 0;
}