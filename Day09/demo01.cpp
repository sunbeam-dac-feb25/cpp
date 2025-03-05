#include <iostream>
using namespace std;
// custom exception class

class InvalidTimeException
{
private:
    string message;

public:
    InvalidTimeException()
    {
        message = "";
    }
    InvalidTimeException(string message)
    {
        this->message = message;
    }
    void printStackTrace()
    {
        cout << "Exception - InvalidTimeException" << endl;
        cout << "Message - " << message << endl;
    }
};

class Time
{
    int hr;
    int min;

public:
    Time()
    {
        hr = 10;
        min = 10;
    }
    void setHr(int hr)
    {
        if (hr < 0 || hr > 23)
            throw InvalidTimeException();
        this->hr = hr;
    }
    void setMin(int min)
    {
        if (min < 0 || min > 59)
            throw InvalidTimeException("min should be between 0 and 59");
        this->min = min;
    }
    void display()
    {
        cout << "Time - " << hr << ":" << min << endl;
    }
};
int main()
{

    Time t;
    try
    {
        t.setHr(15);
        t.setMin(45);
        t.display();
    }
    catch (InvalidTimeException e)
    {
        e.printStackTrace();
    }
    cout << "Program Completed" << endl;
    return 0;
}