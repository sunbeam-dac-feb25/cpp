#include <iostream>
using namespace std;

int main7()
{
    int num1 = 10;
    // const int *ptr = &num1;
    int const *const ptr = &num1;
    num1 = 20;
    //*ptr = 30; // NOT OK
    int num2 = 50;
    // ptr = &num2;// NOT OK
    return 0;
}

int main6()
{
    int num1 = 10;
    // const int *ptr = &num1;
    int const *ptr = &num1;
    num1 = 20;
    //*ptr = 30; // NOT OK
    int num2 = 50;
    ptr = &num2;
    return 0;
}

int main5()
{
    const int num1 = 10;
    const int *const ptr = &num1;
    // num1 = 20;// NOT OK
    //*ptr = 30;// NOT OK
    int num2 = 50;
    // ptr = &num2; // NOT OK
    return 0;
}

int main4()
{
    int num1 = 10;
    int *const ptr = &num1;
    num1 = 20;
    *ptr = 30;
    int num2 = 50;
    // ptr = &num2; // NOT OK
    return 0;
}

int main3()
{
    const int num1 = 10;
    // num1 = 20; // NOT OK
    // const int *ptr = &num1;
    int const *ptr = &num1;
    //*ptr = 20; // NOT OK
    int num2 = 40;
    ptr = &num2;
    return 0;
}

int main2()
{
    int num1 = 10;
    num1 = 20;
    int *ptr = &num1;
    *ptr = 30;
    int num2 = 40;
    ptr = &num2;

    return 0;
}

int main1()
{
    const int num = 10;
    // num = 20; // NOT OK. once initialized we cannot change the value inside it
    return 0;
}