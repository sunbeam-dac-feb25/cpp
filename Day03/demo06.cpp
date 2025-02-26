#include <iostream>
using namespace std;
class Point
{
    int x;
    int y;

public:
    Point()
    {
        this->x = 1;
        this->y = 1;
    }
    Point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    // Mutators -> Setters
    // The fuctions that are designed to modify/change the value
    // of a single data member of the class is called as Mutator
    // It is industry practice to start the name of the  mutator
    // with `set` followed by the name of the datamember
    void setY(int y)
    {
        this->y = y;
    }

    void setX(int x)
    {
        this->x = x;
    }

    // Inspector -> Getters
    // The fuctions that are designed to read the value
    // of a single data member of the class is called as Inspector
    // It is industry practice to start the name of the  Inspector
    // with `get` followed by the name of the datamember
    // Inspectors are designed to return the valur of the data member directly
    int getX()
    {
        return x;
    }

    // Facilitators
    void display()
    {
        cout << "Point = (" << x << "," << y << ")" << endl;
    }
};

class Test
{
private:
    int n1; // write
    int n2; // read

public:
    void setN1(int n1)
    {
        this->n1 = n1;
    }
    // Inspector -> Getters
    //
    int getN2()
    {
        return n2;
    }
};

void f1()
{
    Test t1;
    // t1.n1 = 10;         // write
    t1.setN1(10); // write
    // cout << t1.n1 << endl; // read

    // t1.n2 = 20;            // write
    // cout << t1.n2 << endl; // read
    cout << t1.getN2() << endl; // read
}

int main()
{
    Point p1;
    p1.display();
    // p1.y = 2; // NOT OK -> y is private data memebr
    p1.setY(2);
    cout << "After change in y - " << endl;
    p1.display();
    return 0;
}
