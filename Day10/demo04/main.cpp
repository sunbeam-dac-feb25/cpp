#include "employee.h"

int menu()
{
    cout << "***************************" << endl;
    int choice;
    cout << "0. EXIT" << endl;
    cout << "1. Add Employee" << endl;
    cout << "2. Display All Employees" << endl;
    cout << "3. Find Employee" << endl;
    cout << "4. Delete Employee" << endl;
    cout << "5. Add Student" << endl;
    cout << "6. Display All Students" << endl;
    cout << "7. Find Student" << endl;
    cout << "8. Delete Student" << endl;
    cout << "Enter your choice - ";
    cin >> choice;
    cout << "***************************" << endl;
    return choice;
}

int main()
{

    int choice;
    vector<Employee *> emp_list;
    loadEmployees(emp_list);
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
        {
            Employee *employee = new Employee();
            employee->accept();
            emp_list.push_back(employee);
        }
        break;
        case 2:
            for (int i = 0; i < emp_list.size(); i++)
                emp_list[i]->display();
            break;
        case 3:
        {
            int index = findEmployee(emp_list);
            if (index != -1)
                emp_list[index]->display();
            else
                cout << "Employee not found..." << endl;
        }
        break;
        case 4:
        {
            int index = findEmployee(emp_list);
            if (index != -1)
            {
                delete emp_list[index];
                emp_list.erase(emp_list.begin() + index);
            }
            else
                cout << "Cannot delete..Employee not found..." << endl;
        }
        break;
        case 5:
        case 6:
        case 7:
        case 8:
            cout << "You do it...." << endl;
            break;
        default:
            cout << "Wrong choice..." << endl;
            break;
        }
    }

    saveEmployees(emp_list);
    cout << "*********************" << endl;
    cout << "Employees saved..." << endl;
    cout << "*********************" << endl;
    return 0;
}