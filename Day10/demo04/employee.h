#ifndef employee_h
#define employee_h
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

class Employee
{
    int id;
    string name;
    double salary;

public:
    Employee() {}
    Employee(int id, string name, double salary);
    void accept();
    void display();
    int getId();
    string getName();
    double getSalary();
};

void saveEmployees(vector<Employee *> &emp_list);

void loadEmployees(vector<Employee *> &emp_list);

int findEmployee(vector<Employee *> &emp_list);
#endif