#include <iostream>

struct Time
{
private: // Access specifier
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
// by default the members of the structure are public
int main()
{
    struct Time t1;
    // t1.hr = -20; // NOT OK
    t1.accept();
    t1.display();
    t1.ChangeHours(-20);

    return 0;
}