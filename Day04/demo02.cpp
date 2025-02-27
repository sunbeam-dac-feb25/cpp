#include <iostream>
using namespace std;

// constant example

class BankAccount
{
private:
    const int accno;
    string name;
    double balance;

public:
    BankAccount(int accno) : accno(accno) {}

    BankAccount(int accno, string name, double balance) : accno(accno)
    {
        this->name = name;
        this->balance = balance;
    }

    void acceptAccountDetails()
    {
        cout << "Enter the name - ";
        cin >> name;
        cout << "Enter the initial balance - ";
        cin >> balance;
    }

    void withdraw(double amount)
    {
        balance = balance - amount;
    }

    void deposit(double amount)
    {
        balance = balance + amount;
    }

    void displayAccountDetails() const
    {
        cout << "Accno = " << accno << endl;
        cout << "Name = " << name << endl;
        cout << "Balance = " << balance << endl;
    }
};

int main()
{
    BankAccount b1(1001);
    b1.acceptAccountDetails();
    b1.displayAccountDetails();

    BankAccount b2(1002, "Mukesh", 20000);
    b2.acceptAccountDetails();
    b2.displayAccountDetails();

    BankAccount b3(1003, "Ramesh", 30000);
    b3.displayAccountDetails();
    return 0;
}