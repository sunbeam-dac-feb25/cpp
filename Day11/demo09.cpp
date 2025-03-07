#include <iostream>
using namespace std;
// Factory Design Pattern
class Shape
{
public:
    virtual void accept() = 0;
    virtual void calculateArea() = 0;
    static Shape *shapeFactory(int choice);
};

class Circle : public Shape
{
public:
    void accept()
    {
        cout << "Circle::accept()" << endl;
    }
    void calculateArea()
    {
        cout << "Circle::Area()" << endl;
    }
};

class Rectangle : public Shape
{
public:
    void accept()
    {
        cout << "Rectangle::accept()" << endl;
    }
    void calculateArea()
    {
        cout << "Rectangle::Area()" << endl;
    }
};

class Square : public Shape
{
public:
    void accept()
    {
        cout << "Square::accept()" << endl;
    }
    void calculateArea()
    {
        cout << "Square::Area()" << endl;
    }
};

class Triangle : public Shape
{
public:
    void accept()
    {
        cout << "Triangle::accept()" << endl;
    }
    void calculateArea()
    {
        cout << "Triangle::Area()" << endl;
    }
};

Shape *Shape::shapeFactory(int choice)
{
    switch (choice)
    {
    case 1:
        return new Circle();
    case 2:
        return new Rectangle();
    case 3:
        return new Square();
    case 4:
        return new Triangle();
    }
    return NULL;
}

int menu()
{
    int choice;
    cout << "0. EXIT" << endl;
    cout << "1. Area of Circle" << endl;
    cout << "2. Area of Rectangle" << endl;
    cout << "3. Area of Square" << endl;
    cout << "3. Area of Triangle" << endl;
    cout << "Enter choice - ";
    cin >> choice;
    return choice;
}
int main()
{
    int choice;
    Shape *shape;
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
        case 2:
        case 3:
        case 4:
            shape = Shape::shapeFactory(choice);
            break;
        }
        if (shape != NULL)
        {
            shape->accept();
            shape->calculateArea();
            delete shape;
            shape = NULL;
        }
    }
    return 0;
}