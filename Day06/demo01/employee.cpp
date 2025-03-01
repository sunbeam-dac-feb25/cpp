#include <iostream>
using namespace std;
#include "employee.h"
using namespace NEmployee;

Employee::Employee()
{
}
Employee::Employee(int empid, string name, double salary)
{
    this->empid = empid;
    this->name = name;
    this->salary = salary;
}

void Employee::setEmpId(int empid)
{
    this->empid = empid;
}

void Employee::setName(string name)
{
    this->name = name;
}

void Employee::setSalary(double salary)
{
    this->salary = salary;
}

int Employee::getEmpId()
{
    return empid;
}
string Employee::getName()
{
    return name;
}
double Employee::getSalary()
{
    return salary;
}

void Employee::acceptEmployee()
{
    cout << "Enter empid - ";
    cin >> empid;
    cout << "Enter name - ";
    cin >> name;
    cout << "Enter salary - ";
    cin >> salary;
}
void Employee::displayEmployee()
{
    cout << "Empid = " << empid << endl;
    cout << "Name = " << name << endl;
    cout << "Salary = " << salary << endl;
}

void findEmployee()
{
    cout << "Find Employee" << endl;
}