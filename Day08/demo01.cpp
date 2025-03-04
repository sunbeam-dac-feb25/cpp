#include <iostream>
using namespace std;
class Employee
{
    int id;
    double salary;

public:
    Employee()
    {
    }
    Employee(int id, double salary)
    {
    }
    virtual void accept()
    {
        cout << "Employee::accept" << endl;
    }
    virtual void display()
    {
        cout << "Employee::display" << endl;
    }
};

class Manager : virtual public Employee
{
    double bonus;

public:
    Manager()
    {
    }
    Manager(int id, double salary, double bonus) : Employee(id, salary)
    {
    }

    void accept()
    {
        Employee::accept();
        acceptManager();
    }
    void display()
    {
        Employee::display();
        displayManager();
    }

protected:
    void acceptManager()
    {
        cout << "Manager::accept" << endl;
    }
    void displayManager()
    {
        cout << "Manager::display" << endl;
    }
};

class Salesman : virtual public Employee
{
    double commission;

public:
    Salesman()
    {
    }
    Salesman(int id, double salary, double commission) : Employee(id, salary)
    {
    }
    void accept()
    {
        Employee::accept();
        acceptSalesman();
    }
    void display()
    {
        Employee::display();
        displaySalesman();
    }

protected:
    void acceptSalesman()
    {
        cout << "Salesman::accept" << endl;
    }

    void displaySalesman()
    {
        cout << "Salesman::display" << endl;
    }
};

class SalesManager : public Manager, Salesman
{
public:
    void accept()
    {
        Employee::accept();
        Manager::acceptManager();
        Salesman::acceptSalesman();
    }
    void display()
    {
        Employee::display();
        Manager::displayManager();
        Salesman::displaySalesman();
    }
};
int main()
{
    Employee e;
    e.accept();
    e.display();

    SalesManager sm(1, "Anil", 10000, 5000, 500);
    sm.accept();
    sm.display();

    return 0;
}