// header guard
#ifndef employee_h
#define employee_h
#include <string>
using namespace std;
namespace NEmployee
{
    class Employee
    {
    private:
        int empid;
        string name;
        double salary;

    public:
        Employee();
        Employee(int empid, string name, double salary);
        void setEmpId(int empid);
        void setName(string name);
        void setSalary(double salary);
        int getEmpId();
        string getName();
        double getSalary();
        void acceptEmployee();
        void displayEmployee();
    };

    void findEmployee();
}
#endif