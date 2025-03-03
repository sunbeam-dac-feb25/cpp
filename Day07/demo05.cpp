#include <iostream>
using namespace std;
class Person
{
private:
    string name;

public:
    Person()
    {
        cout << "Person()" << endl;
    }
    Person(string name)
    {
        cout << "Person(string)" << endl;
        this->name = name;
    }

    virtual void accept()
    {
        cout << "Enter the name - ";
        cin >> name;
    }

    virtual void display()
    {
        cout << "Name - " << name << endl;
    }
};
class Employee : public Person
{
private:
    int empid;
    double salary;

public:
    Employee()
    {
        cout << "Employee()" << endl;
    }

    Employee(int empid, string name, double salary) : Person(name)
    {
        cout << "Employee(int,string,double)" << endl;
        this->empid = empid;
        this->salary = salary;
    }

    // function overiding
    void accept()
    {
        cout << "Enter the empid - ";
        cin >> empid;
        Person::accept();
        cout << "Enter the salary - ";
        cin >> salary;
    }

    // function overiding
    void display()
    {
        cout << "Empid - " << empid << endl;
        Person::display(); // unhide the implementation of the base class function
        cout << "Salary - " << salary << endl;
    }
};

class Student : public Person
{

private:
    int rollno;
    double marks;

public:
    Student()
    {
        cout << "Student()" << endl;
    }

    Student(int rollno, string name, double marks) : Person(name)
    {
        cout << "Student(int,string,double)" << endl;
        this->rollno = rollno;
        this->marks = marks;
    }

    // function overiding
    void accept()
    {
        cout << "Enter the rollno - ";
        cin >> rollno;
        Person::accept();
        cout << "Enter the marks - ";
        cin >> marks;
    }

    // function overiding
    void display()
    {
        cout << "Rollno - " << rollno << endl;
        Person::display();
        cout << "Marks - " << marks << endl;
    }
};

int main()
{
    // Employee *e = new Employee();
    // e->accept();
    // e->display();

    // Student *s = new Student();
    // s->accept();
    // s->display();

    Person *p;
    // p = new Employee(); // upcasting
    p = new Student(); // upcasting

    // Run-Time Polymorphism
    p->accept();
    p->display();
    return 0;
}

int main1()
{
    // Person p1;          // paramaeterless::Person
    // Person p2("Rohan"); // parametrized::Person

    Employee e1; // Person(), Employee();
    e1.accept();
    e1.display();

    Employee e2(1, "Anil", 10000);
    e2.display();
    return 0;
}