#include <iostream>
using namespace std;
// template class

template <class X, class Y>
class Point
{
private:
    X x;
    Y y;

public:
    Point()
    {
    }
    Point(X x, Y y)
    {
        this->x = x;
        this->y = y;
    }
    void displayPoint()
    {
        cout << "Point (" << x << "," << y << ")" << endl;
    }
};

int main()
{
    Point<int, int> p1(2, 3);
    p1.displayPoint();

    Point<double, double> p2(3.7, 8.5);
    p2.displayPoint();

    Point<char, char> p3('A', 'B');
    p3.displayPoint();

    Point<char, int> p4('A', 60);
    p4.displayPoint();

    Point<int, double> p5(2025, 80.78);
    p5.displayPoint();

    return 0;
}