#include "employee.h"

Employee::Employee(int id, string name, double salary)
{
    this->id = id;
    this->name = name;
    this->salary = salary;
}
void Employee::accept()
{
    cout << "Enter empid - ";
    cin >> id;
    cout << "Enter name - ";
    cin >> name;
    cout << "Enter salary - ";
    cin >> salary;
}

void Employee::display()
{
    cout << "Empid - " << id << endl;
    cout << "Name - " << name << endl;
    cout << "Salary - " << salary << endl;
}

int Employee::getId()
{
    return id;
}
string Employee::getName()
{
    return name;
}
double Employee::getSalary()
{
    return salary;
}

void saveEmployees(vector<Employee *> &emp_list)
{
    ofstream fout("./data/employee.txt");
    Employee *employee;
    for (int i = 0; i < emp_list.size(); i++)
    {
        employee = emp_list[i];
        fout << employee->getId() << "," << employee->getName() << "," << employee->getSalary() << endl;
    }
    fout.close();
}

void loadEmployees(vector<Employee *> &emp_list)
{
    ifstream fin("./data/employee.txt");
    string line;
    while (getline(fin, line))
    {
        stringstream data(line);
        string id, name, salary;
        getline(data, id, ',');
        getline(data, name, ',');
        getline(data, salary, ',');
        emp_list.push_back(new Employee(stoi(id), name, stod(salary)));
    }
    fin.close();
    cout << "********************************" << endl;
    cout << "Employees are added in vector..." << endl;
    cout << "********************************" << endl;
}

int findEmployee(vector<Employee *> &emp_list)
{
    int id;
    cout << "Enter empid to search - ";
    cin >> id;
    for (int i = 0; i < emp_list.size(); i++)
    {
        if (id == emp_list[i]->getId())
            return i;
    }
    return -1;
}