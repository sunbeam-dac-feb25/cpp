#include <iostream>
using namespace std;

// template function
template <typename T>
void myswap(T *v1, T *v2)
{
    T temp = *v1;
    *v1 = *v2;
    *v2 = temp;
}

template <typename X, typename Y>
bool compare(X v1, Y v2)
{
    if (v1 > v2)
        return true;
    return false;
}

int main()
{
    char n1 = 'A';
    char n2 = 'B';
    cout << "Before swapping - " << endl;
    cout << "n1 - " << n1 << " , n2 - " << n2 << endl;

    myswap(&n1, &n2);

    cout << "After swapping - " << endl;
    cout << "n1 - " << n1 << " , n2 - " << n2 << endl;
    return 0;
}

int main2()
{
    double n1 = 10.20;
    double n2 = 20.30;
    cout << "Before swapping - " << endl;
    cout << "n1 - " << n1 << " , n2 - " << n2 << endl;

    myswap(&n1, &n2);

    cout << "After swapping - " << endl;
    cout << "n1 - " << n1 << " , n2 - " << n2 << endl;
    return 0;
}

int main1()
{
    int n1 = 10;
    int n2 = 20;
    cout << "Before swapping - " << endl;
    cout << "n1 - " << n1 << " , n2 - " << n2 << endl;

    myswap(&n1, &n2);

    cout << "After swapping - " << endl;
    cout << "n1 - " << n1 << " , n2 - " << n2 << endl;
    return 0;
}