#include <iostream>
using namespace std;
class Student
{
    int rollno;
    string name;
    double marks;

public:
    Student() : Student(0, "", 0.0) {}
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

int menu()
{
    int choice;
    cout << "0. EXIT" << endl;
    cout << "1. Add student" << endl;
    cout << "2. Display all students" << endl;
    cout << "3. Find Student" << endl;
    cout << "Enter your choice - ";
    cin >> choice;
    return choice;
}

void addDummyData(Student **ptr)
{
    ptr[0] = new Student(1, "Anil", 60);
    ptr[1] = new Student(2, "Mukesh", 70);
    ptr[2] = new Student(3, "Ramesh", 80);
    ptr[3] = new Student(4, "Suresh", 90);
    ptr[4] = new Student(5, "Ram", 70);
}

void findStudent(Student **ptr, int index)
{
    // take the input of rollno to search
    // TO-DO
}

// Also use enum to write the menu driven code
int main()
{
    Student *arr[5];
    addDummyData(arr);
    int index = 5;
    int choice;
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
            if (index < 5)
            {
                arr[index] = new Student();
                arr[index]->accept();
                index++;
            }
            else
                cout << "Intake is full" << endl;
            break;
        case 2:
            for (int i = 0; i < index; i++)
                arr[i]->display();
            break;
        case 3:
            // TO-DO
            findStudent(arr, index);
            break;
        default:
            cout << "Wrong chocie ..." << endl;
            break;
        }
    }
    // deallocation of dynamic memory for the student
    for (int i = 0; i < index; i++)
        delete arr[i];
    return 0;
}