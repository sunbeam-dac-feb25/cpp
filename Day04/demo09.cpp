#include <iostream>
using namespace std;

class BankAccount
{
    const int accno;
    string name;
    double balance;
    static int generateAccNo;

public:
    BankAccount() : accno(++generateAccNo) {}
    BankAccount(string name, double balance) : accno(++generateAccNo)
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

    void displayAccountDetails() const // const BankAccount *const this
    {
        cout << "Accno - " << accno << endl;
        cout << "Name - " << name << endl;
        cout << "Balance - " << balance << endl;
    }

    static int getGenerateAccNo()
    {
        return generateAccNo;
    }
};

int BankAccount::generateAccNo = 1000;

int main()
{
    BankAccount b1;
    BankAccount b2("Mukesh", 20000);

    b1.acceptAccountDetails();

    b1.displayAccountDetails();
    b2.displayAccountDetails();

    BankAccount b3;
    BankAccount b4;
    BankAccount b5;
    BankAccount b6;
    BankAccount b7;

    cout << "Last generated accno = " << BankAccount::getGenerateAccNo() << endl;
    return 0;
}