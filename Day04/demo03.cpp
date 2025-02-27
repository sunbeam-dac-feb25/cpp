#include <iostream>
using namespace std;

// understanding the dynamic memory allocation in cpp

int n2 = 20;

int main()
{
    int *ptr1 = new int;
    *ptr1 = 10;

    int *ptr2 = new int(20);

    int *arr = new int[5];

    delete ptr1;
    delete ptr2;
    delete[] arr;
    return 0;
}

int main1()
{
    int n1 = 10;
    int *ptr = new int; // allocation on heap
    *ptr = 20;
    cout << "Value at heap =  " << *ptr << endl;
    delete ptr; // deallocation
    ptr = NULL; // to avoid dangling pointer
    return 0;
}