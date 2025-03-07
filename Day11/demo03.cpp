#include <iostream>
#include <vector>
using namespace std;
// Insertion and Extraction Operator Overloading
class Employee
{
    int id;
    string name;
    double salary;

public:
    Employee()
    {
    }

    void accept()
    {
    }

    // friend function
    friend void operator>>(istream &cin, Employee &e);
    friend void operator<<(ostream &cout, Employee &e);
};

void operator>>(istream &cin, Employee &e)
{
    cout << "Enter the empid - ";
    cin >> e.id;
    cout << "Enter the name - ";
    cin >> e.name;
    cout << "Enter the salary - ";
    cin >> e.salary;
}

void operator<<(ostream &cout, Employee &e)
{
    cout << "Empid - " << e.id << endl;
    cout << "Name - " << e.name << endl;
    cout << "Salary - " << e.salary << endl;
}

int main()
{
    Employee e;
    // e.accept();
    // e.display();
    cin >> e;  // operator>>(cin,e); // accept()
    cout << e; // operator<<(cout,e) // display()

    vector<Employee> v1;
    cout << v1[0];
    return 0;
}