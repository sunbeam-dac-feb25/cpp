#include <iostream>
using namespace std;
class Shape
{
public:
    virtual void accept() = 0;
    virtual void calculate() = 0;
};

class Circle : public Shape
{
public:
    void accept()
    {
        cout << "Circle::accept()" << endl;
    }
    void calculate()
    {
        cout << "Circle::calulate()" << endl;
    }
};

class Rectangle : public Shape
{
public:
    void accept()
    {
        cout << "Recctangle::accept()" << endl;
    }
    void calculate()
    {
        cout << "Rectangle::calulate()" << endl;
    }
    void calculatePerimeter()
    {
        cout << "Rectangle::Perimeter()" << endl;
    }
};

int main()
{
    Shape *sptr = NULL;
    // sptr = new Circle();
    sptr = new Rectangle(); // upcasting

    sptr->accept();
    sptr->calculate();
    // 6Circle == 9Rectangle
    // 9Rectangle == 9Rectangle
    if (typeid(*sptr) == typeid(Rectangle)) // instanceof
    {
        Rectangle *rptr = (Rectangle *)sptr; // Downcasting
        rptr->calculatePerimeter();
    }

    return 0;
}

int main2()
{
    Shape *sptr = NULL;
    Circle *cptr;
    Rectangle *rptr;

    Circle c;
    Rectangle r;

    // sptr = new Circle();
    sptr = new Rectangle();

    cout << "Type of sptr = " << typeid(sptr).name() << endl;
    cout << "Type of cptr = " << typeid(cptr).name() << endl;
    cout << "Type of rptr = " << typeid(rptr).name() << endl;
    cout << "Type of c = " << typeid(c).name() << endl;
    cout << "Type of r = " << typeid(r).name() << endl;

    cout << "Type of (*sptr) = " << typeid(*sptr).name() << endl;

    return 0;
}

int main1()
{
    Shape *sptr = NULL;
    sptr = new Circle();
    // sptr = new Rectangle(); // upcasting

    sptr->accept();
    sptr->calculate();

    // most riskiest form of typecasting
    // Rectangle *rptr = (Rectangle *)sptr; // Downcasting

    Rectangle *rptr = dynamic_cast<Rectangle *>(sptr); // Downcasting
    if (rptr != NULL)
        rptr->calculatePerimeter();
    else
        cout << "ClassCastException::Downcasting is not Possible" << endl;

    return 0;
}