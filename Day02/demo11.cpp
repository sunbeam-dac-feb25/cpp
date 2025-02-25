#include <iostream>
using namespace std;
namespace n_date
{
    class Date
    {
    private:
        int day;
        int month;
        int year;

    public:
        void acceptDate()
        {
            cout << "Enter the day - ";
            cin >> day;
            cout << "Enter the month - ";
            cin >> month;
            cout << "Enter the year - ";
            cin >> year;
        }

        void displayDate()
        {
            cout << "Date = " << day << "/" << month << "/" << year << endl;
        }
    };
}

int main()
{
    n_date::Date d1;

    using namespace n_date;
    Date d2;

    d1.acceptDate();
    d2.acceptDate();

    d1.displayDate();
    d2.displayDate();

    // cout << "Size of the d1 = " << sizeof(d1);
    return 0;
}