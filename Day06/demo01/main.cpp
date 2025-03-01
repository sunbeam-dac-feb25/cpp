#include <iostream>
using namespace std;
#include "employee.h"

// using namespace NEmployee;
int main()
{
    cout << "Welcome to my application..." << endl;

    NEmployee::Employee e1(1, "Anil", 10000);

    NEmployee::Employee e2;
    e2.acceptEmployee();

    e1.displayEmployee();
    e2.displayEmployee();
    return 0;
}