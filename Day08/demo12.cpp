#include <iostream>
using namespace std;

void division(int n, int d)
{
    if (d == 0)
        throw 2; // int type of exception
    int result = n / d;
    cout << "Divison = " << result << endl;
}

void multiplication(int n1, int n2)
{
    if (n1 == 0 || n2 == 0)
        throw 4.5; // double type of exception
    int result = n1 * n2;
    cout << "Multiplication = " << result << endl;
}

void substraction(int n1, int n2)
{
    if (n1 < n2)
        throw 4; // int type of exception
    int result = n1 - n2;
    cout << "Substraction = " << result << endl;
}
int main()
{
    try
    {
        division(10, 0);
    }
    catch (int ex)
    {
        cout << "ERROR : " << ex << " Msg : Denominator cannot be 0... " << endl;
    }

    try
    {
        substraction(20, 10);

        multiplication(0, 5);
    }
    catch (int ex)
    {
        cout << "Num1 cannot be less than Num2..." << endl;
    }
    catch (...) // Generic Catch blocks
    {
        cout << "Something went Wrong..." << endl;
    }

    cout << "Program finished" << endl;
    return 0;
}

int main1()
{
    try
    {
        division(10, 2);
        multiplication(0, 5);
    }
    catch (int ex)
    {
        cout << "Denominator cannot be 0" << endl;
    }
    catch (double ex)
    {
        cout << "Number cannot be 0" << endl;
    }

    cout << "Program finished" << endl;
    return 0;
}