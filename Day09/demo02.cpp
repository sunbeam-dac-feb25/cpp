#include <iostream>
using namespace std;

// Dynamic Exception Specification list
// syntax is valid till c++11 and not aafter this version
void division(int n, int d) throw(double)
{
    if (d == 0)
        throw 2;
    cout << "Division = " << n / d << endl;
}

int main()
{
    try
    {
        division(10, 0);
    }
    catch (int e)
    {
        cout << "denominator cannot be 0" << endl;
    }
    cout << "Progarm finished" << endl;
    return 0;
}