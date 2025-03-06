#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

class Employee
{
    int id;
    string name;
    double salary;

public:
    Employee()
    {
    }

    Employee(int id, string name, double salary)
    {
        this->id = id;
        this->name = name;
        this->salary = salary;
    }
    void accept()
    {
        cout << "Enter empid - ";
        cin >> id;
        cout << "Enter name - ";
        cin >> name;
        cout << "Enter salary - ";
        cin >> salary;
    }

    void display()
    {
        cout << "Empid - " << id << endl;
        cout << "Name - " << name << endl;
        cout << "Salary - " << salary << endl;
    }

    int getId()
    {
        return id;
    }
    string getName()
    {
        return name;
    }
    double getSalary()
    {
        return salary;
    }
};

void write()
{
    ofstream fout("file2.txt", ios::app);
    Employee e;
    e.accept();
    fout << e.getId() << "," << e.getName() << "," << e.getSalary() << endl;
    fout.close();
}

void read()
{
    ifstream fin("file2.txt");
    string line;
    while (getline(fin, line))
    {
        cout << line << endl;
        // convert the string line into the employee object
        stringstream data(line);
        string id, name, salary;
        getline(data, id, ',');
        getline(data, name, ',');
        getline(data, salary, ',');
        Employee e(stoi(id), name, stod(salary));
        e.display();
    }
    fin.close();
}

int main()
{
    // write();
    read();
    return 0;
}