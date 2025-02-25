#include <iostream>
using namespace std;

class Time
{
};

int main()
{
    Time t1;
    int choice;
    do
    {
        cout << "0. EXIT" << endl;
        cout << "1. Add Time" << endl;
        cout << "2. Display Time" << endl;
        cout << "Enter your choice-";
        cin >> choice;
        switch (choice)
        {
        case 0:
            cout << "Thank you for using the app.. :)" << endl;
            break;
        case 1:
            cout << "Time added" << endl;
            break;
        case 2:
            cout << "Time display" << endl;
            break;
        default:
            cout << "Wrong choice.. :(" << endl;
            break;
        }
    } while (choice != 0);
    return 0;
}