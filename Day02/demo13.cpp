#include <iostream>
using namespace std;

class Time
{
private:
    int hr;
    int min;

public:
    void addTime() // Time * const this
    {
        cout << "Enter hrs and mins  - ";
        cin >> this->hr >> min;
    }

    void displayTime() // this
    {
        cout << "Time = " << hr << ":" << this->min << endl;
    }
};

int menu()
{
    int choice;
    cout << "0. EXIT" << endl;
    cout << "1. Add Time" << endl;
    cout << "2. Display Time" << endl;
    cout << "Enter choice - ";
    cin >> choice;
    return choice;
}

int main()
{
    Time t1;
    int choice;
    // choice = menu();
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
            t1.addTime();
            break;
        case 2:
            t1.displayTime();
            break;
        default:
            cout << "Wrong choice..:(" << endl;
            break;
        }
    }
    cout << "Thank you for using our app.:)" << endl;
    return 0;
}