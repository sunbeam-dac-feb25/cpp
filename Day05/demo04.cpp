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
    Student ***arr = new Student **[2];
    arr[0] = new Student *[3];
    arr[1] = new Student *[2];
    arr[0][0] = new Student(1, "Anil", 65);
    arr[0][1] = new Student(2, "Mukesh", 80);
    arr[0][2] = new Student(3, "Ramesh", 70);
    arr[1][0] = new Student(4, "Suresh", 60);
    arr[1][1] = new Student(5, "Ram", 70);

    // deallocation logic
    for (int i = 0; i < 2; i++)
    {
        if (i == 0)
        {
            for (int j = 0; j < 3; j++)
                delete arr[i][j];
        }
        if (i == 1)
        {
            for (int j = 0; j < 2; j++)
                delete arr[i][j];
        }
    }

    for (int i = 0; i < 2; i++)
        delete[] arr[i];

    delete[] arr;

    return 0;
}