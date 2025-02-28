#include <iostream>
using namespace std;

class Student
{
    int rollno;
    string name;
    double marks;

public:
    Student() : Student(0, "", 0.0)
    {
    }
    Student(int rollno, string name, double marks)
    {
        this->rollno = rollno;
        this->name = name;
        this->marks = marks;
    }
    void accept()
    {
        cout << "Enter the rollno - ";
        cin >> rollno;
        cout << "Enter the name - ";
        cin >> name;
        cout << "Enter the marks - ";
        cin >> marks;
    }
    void display()
    {
        cout << "Rollno - " << rollno << endl;
        cout << "Name - " << name << endl;
        cout << "Marks - " << marks << endl;
    }
};

int main()
{
    Student **arr = new Student *[5];
    arr[0] = new Student(1, "Anil", 50);
    arr[1] = new Student(2, "Mukesh", 60);
    arr[2] = new Student(3, "Ramesh", 70);
    arr[3] = new Student(4, "Suresh", 80);
    arr[4] = new Student(5, "Ram", 90);

    for (int i = 0; i < 5; i++)
        arr[i]->display();

    for (int i = 0; i < 5; i++)
    {
        delete arr[i];
        arr[i] = NULL;
    }
    delete[] arr;
    arr = NULL;
    return 0;
}

int main3()
{
    // TO-DO
    Student *arr = new Student[5];
    return 0;
}

int main2()
{
    // TO-DO
    Student *arr[5];
    return 0;
}

int main1()
{
    Student arr[5];
    for (int i = 0; i < 5; i++)
        arr[i].accept();

    for (int i = 0; i < 5; i++)
        arr[i].display();
    return 0;
}