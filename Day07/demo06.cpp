#include <iostream>
using namespace std;
// abstract class
// the class that consists even of single pure virtual function
// is called as abstract class
// we cannot create the object of the abstract class
// we can create only the pointers
class Shape
{
public:
    // pure virtual functions
    virtual void accept() = 0;
    virtual void calculateArea() = 0;
};
class Circle : public Shape
{
private:
    int radius;

public:
    // override
    void accept()
    {
        cout << "Enter the radius - ";
        cin >> radius;
    }

    // override
    void calculateArea()
    {
        cout << "Area of circle = " << 3.14 * radius * radius << endl;
    }
};

class Rectangle : public Shape
{
    int length;
    int breadth;

public:
    void accept()
    {
        cout << "Enter the length - ";
        cin >> length;
        cout << "Enter the breadth - ";
        cin >> breadth;
    }
    void calculateArea()
    {
        cout << "Area of Rectangle = " << length * breadth << endl;
    }
};

enum EMenu
{
    EXIT,
    CIRCLE,
    RECTANGLE
};

EMenu menu()
{
    int choice;
    cout << "0. EXIT" << endl;
    cout << "1. Area of Circle" << endl;
    cout << "2. Area of Rectangle" << endl;
    cout << "Enter the chocie - ";
    cin >> choice;
    return EMenu(choice);
}

int main()
{
    Shape *arr[10];
    EMenu choice;
    Shape *sptr = NULL;
    while ((choice = menu()) != EXIT)
    {
        switch (choice)
        {
        case CIRCLE:
            sptr = new Circle();
            break;

        case RECTANGLE:
            sptr = new Rectangle();
            break;

        default:
            cout << "Wrong choice..." << endl;
            break;
        }
        if (sptr != NULL)
        {
            sptr->accept();
            sptr->calculateArea();
            delete sptr;
            sptr = NULL;
        }
    }

    return 0;
}

int main2()
{
    Shape *sptr;
    // sptr = new Circle(); // upcasting
    sptr = new Rectangle(); // upcasting
    sptr->accept();
    sptr->calculateArea();
    return 0;
}

int main1()
{
    Circle c;
    Rectangle r;
    c.accept();
    c.calculateArea();

    r.accept();
    r.calculateArea();
    return 0;
}
