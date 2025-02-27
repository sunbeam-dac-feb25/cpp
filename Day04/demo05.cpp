#include <iostream>
using namespace std;

// reference

void change(int *ptr)
{
    *ptr = 20;
    cout << "ptr == &n1" << ptr << endl;
    cout << "&ptr = " << &ptr << endl;
    cout << "*ptr == n1 " << *ptr << endl;
}

void changeUsingRef(int &ref)
{
    ref = 20;
    cout << "&ref == &n1 " << &ref << endl;
    cout << "ref == n1 " << ref << endl;
}

int main()
{
    int n1 = 10;
    cout << "Initial Value of n1 = " << n1 << endl;
    changeUsingRef(n1); // pass by reference
    cout << "Changed Value of n1 = " << n1 << endl;

    cout << "&n1 = " << &n1 << endl;
    cout << "n1 = " << n1 << endl;
}

int main2()
{
    int n1 = 10;
    int n2 = 40;
    // refrerence
    int &ref = n1;
    ref = n2;
    cout << "n1 = " << n1 << endl;
    cout << "ref = " << ref << endl;
    return 0;
}

int main1()
{
    int n1 = 10;
    cout << "Initial Value of n1 = " << n1 << endl;
    change(&n1); // pass by address
    cout << "Changed Value of n1 = " << n1 << endl;

    cout << "&n1 = " << &n1 << endl;
    cout << "n1 = " << n1 << endl;
    return 0;
}