#include <iostream>
using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date() : Date(1, 1, 2000) {}
    Date(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }
    void acceptDate()
    {
        cout << "Enter day - ";
        cin >> day;
        cout << "Enter month - ";
        cin >> month;
        cout << "Enter year - ";
        cin >> year;
    }

    void displayDate()
    {
        cout << day << "/" << month << "/" << year << endl;
    }
};

// Employee has-a DateOfJoining
class Employee
{
private:
    int empid;
    string name;
    double salary;
    Date doj; // Association -> Composition

public:
    Employee()
    {
        empid = 0;
        name = "";
        salary = 0.0;
    }
    Employee(int empid, string name, double salary, int day, int month, int year) : doj(day, month, year)
    {
        this->empid = empid;
        this->name = name;
        this->salary = salary;
    }

    void acceptEmployee()
    {
        cout << "Enter empid - ";
        cin >> empid;
        cout << "Enter name - ";
        cin >> name;
        cout << "Enter salary - ";
        cin >> salary;
        cout << "Enter the date of Joining" << endl;
        doj.acceptDate();
    }
    void displayEmployee()
    {
        cout << "Empid = " << empid << endl;
        cout << "Name = " << name << endl;
        cout << "Salary = " << salary << endl;
        cout << "Date of joining - ";
        doj.displayDate();
    }
};

// Customer has-a DateOfBirth
class Customer
{
    int cid;
    string name;
    Date *dob; // Association-> Aggegration

public:
    Customer() : Customer(0, "") {}

    Customer(int cid, string name)
    {
        this->cid = cid;
        this->name = name;
        // the pointer should be made NULL
        dob = NULL;
    }

    Customer(int cid, string name, int day, int month, int year) : Customer(cid, name)
    {
        dob = new Date(day, month, year);
    }

    // Mutator to add the dob for a specific customer
    void setDob(Date *dob)
    {
        this->dob = dob;
    }

    void acceptCustomer()
    {
        cout << "Enter customer id - ";
        cin >> cid;
        cout << "Enter customer name - ";
        cin >> name;
    }

    void acceptDob()
    {
        // Initialize the pointer by creating the object
        dob = new Date();
        cout << "Enter the date of Birth - " << endl;
        dob->acceptDate();
    }
    void displayCustomer()
    {
        cout << "Cid - " << cid << endl;
        cout << "Name - " << name << endl;
        // for a customer the dob is optional.
        // so check first if the dob is provided
        if (dob != NULL)
        {
            cout << "Date of Birth - ";
            dob->displayDate();
        }
    }

    // Destructor
    ~Customer()
    {
        cout << "Inside Destructor" << endl;
        if (dob != NULL)
        {
            cout << "Deallocating the memory" << endl;
            delete dob;
            dob = NULL;
        }
    }
};

int main()
{

    // Customer c1;
    // c1.acceptCustomer();

    // Customer c2;
    // c2.acceptCustomer();
    // c2.acceptDob();

    Customer c1(1, "Anil");
    Customer c2(2, "Mukesh", 2, 2, 2002);

    c1.displayCustomer();
    c2.displayCustomer();
    return 0;
}

int main1()
{
    // Employee e1;
    // e1.acceptEmployee();
    // e1.displayEmployee();

    Employee e2(2, "Mukesh", 20000, 2, 2, 2002);
    e2.displayEmployee();
    return 0;
}