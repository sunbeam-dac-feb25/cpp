#include <iostream>
struct Time
{
    // data
    int hr;
    int min;

    // code
    void accept()
    {
        printf("Enter the hrs - ");
        scanf("%d", &hr);
        printf("Enter the mins - ");
        scanf("%d", &min);
    }

    void display()
    {
        printf("Time = %d : %d", hr, min);
    }
};

int main()
{
    struct Time t1; // Abstraction
    t1.accept();
    t1.display();
    return 0;
}
