#include <iostream>
using namespace std;
int n1;

void f1(int n1)
{
}

void f1(int *ptr)
{
}

void division()
{
    throw 1;
    cout << "Division - " << endl;
}

void addition() noexcept
{
    cout << "Addition - " << endl;
}

int main()
{
    cout << "Result for addition - " << noexcept(addition()) << endl;
    cout << "Result for division - " << noexcept(division()) << endl;
    return 0;
}

int main1()
{
    int n1 = NULL;
    int *ptr = nullptr;
    f1(nullptr);
    cout << "n1 = " << n1 << endl;
    cout << "ptr = " << ptr << endl;
    return 0;
}