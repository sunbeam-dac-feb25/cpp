#include <iostream>
using namespace std;
class Point
{
    int x;
    int y;

public:
    Point(int x, int y)
    {
        cout << "Parameterized Ctor" << endl;
        this->x = x;
        this->y = y;
        display();
    }

    void display()
    {
        cout << "Point = (" << x << "," << y << ")" << endl;
    }

    // Destructor
    ~Point()
    {
        cout << "Inside Destructor" << endl;
        this->display();
    }
};

int main()
{
    Point p1(2, 3);
    Point p2(4, 5);
    Point p3(6, 7);
    Point p4(8, 9);

    return 0;
}

void f1()
{
    cout << "f1() started ---" << endl;
    Point p(4, 5);
    cout << "f1() finished ---" << endl;
}
int main1()
{
    cout << "Main started ---" << endl;
    Point p1(2, 3);
    f1();
    cout << "Main finished ---" << endl;
    return 0;
}