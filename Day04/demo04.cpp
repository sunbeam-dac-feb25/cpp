#include <iostream>
using namespace std;

int main()
{
    int *ptr = new int(10);
    cout << "Value at heap = " << *ptr << endl;
    delete ptr;
    // ptr = NULL;

    if (ptr != NULL)
        cout << "Value at heap = " << *ptr << endl;
    else
        cout << "The memory is already freed..." << endl;

    cout << "Program Finished" << endl;
    return 0;
}