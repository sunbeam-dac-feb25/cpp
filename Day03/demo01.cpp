#include <iostream>
using namespace std;

class Time
{
private:
    int hr;
    int min;

public:
    void accept()
    {
        cout << "Accept::Time" << endl;
        cout << "Adddress of the current object = " << this << endl;
        cout << "Enter hr and min = ";
        cin >> hr >> this->min;
    }

    void display()
    {
        cout << "Display::Time" << endl;
    }
};

int main()
{
    Time t1; // Object
    cout << "Address of t1 = " << &t1 << endl;

    Time t2;
    cout << "Address of t2 = " << &t2 << endl;

    t1.accept();
    t2.accept();
    return 0;
}