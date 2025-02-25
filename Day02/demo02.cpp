#include <iostream>

class Time
{
    // Data members
    int hr;
    int min;

public:
    // member functions
    void accept()
    {
        printf("Enter hrs - ");
        scanf("%d", &hr);
        printf("Enter mins - ");
        scanf("%d", &min);
    }

    void display()
    {
        printf("Time = %d : %d", hr, min);
    }

    void ChangeHours(int hours)
    {
        if (hours > 0 && hours < 24)
            hr = hours;
    }
};
// By default all the members of the class are private
int main()
{
    Time t1; // object of the class
    t1.accept();
    t1.display();

    Time t2;
    t2.accept();
    t2.display();

    Time t3;
    t3.accept();
    t3.display();
    return 0;
}