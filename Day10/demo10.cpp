#include <iostream>
using namespace std;
class MyException
{
};

// month will be of 31 days
class Employee
{
protected:
    int id;
    string name;
    double salary;
    int noofleavesTaken;

public:
    Employee()
    {
    }

    Employee(int id, string name, double salary, int noofleaves)
    {
        this->id = id;
        this->name = name;
        this->salary = salary;
        this->noofleavesTaken = noofleaves;
    }

    virtual void calculateTotalSalary() = 0;
};

// sal per day for hr = 1250
// incentive for per employee hired - 500
// 3 paid allowed
class HR : public Employee
{
    int employeesHired;

public:
    HR(int id, string name, int noofleaves, int employeeHired) : Employee(id, name, 1250, noofleaves)
    {
        this->employeesHired = employeeHired;
    }
    void calculateTotalSalary()
    {
        int presentdays = 31 - (noofleavesTaken - 3);
        double monthlySalary = presentdays * salary;
        double incentive = employeesHired * 500;
        double TotalSalary = monthlySalary + incentive;
        cout << "Total salary = " << TotalSalary << endl;
    }
};

// Every day the lecture is conducted
// sal per lecture for trainer = 900
// lab sessions are optional
// sal per lab for trainer = 400
// 2 paid leaves
class Trainer : public Employee
{
    int labSessions;
    int lectureSessions;

public:
    Trainer(int id, string name, int noofleaves, int labSessions, int lectureSessions) : Employee(id, name, 900, noofleaves)
    {
        this->labSessions = labSessions;
        this->lectureSessions = lectureSessions;
    }
    void calculateTotalSalary()
    {
        int presentdays = 31 - (noofleavesTaken - 2);
        double monthlySalary = presentdays * salary;
        double incentive = labSessions * 400;
        double TotalSalary = monthlySalary + incentive;
        cout << "Total salary = " << TotalSalary << endl;
    }
};

int main()
{
    HR hr1(1, "Anil", 10, 5);
    hr1.calculateTotalSalary();

    Trainer t1(2, "Mukesh", 5, 10, 20);
    t1.calculateTotalSalary();
    return 0;
}