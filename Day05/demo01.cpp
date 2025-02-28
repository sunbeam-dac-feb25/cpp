#include <iostream>
using namespace std;

int main()
{
    int **arr = new int *[5];
    arr[0] = new int(10);
    arr[1] = new int(20);
    arr[2] = new int(30);
    arr[3] = new int(40);
    arr[4] = new int(50);

    for (int i = 0; i < 5; i++)
        cout << "Element = " << *arr[i] << endl;

    for (int i = 0; i < 5; i++)
    {
        delete arr[i];
        arr[i] = NULL;
    }
    delete[] arr;
    arr = NULL;
    return 0;
}

int main3()
{
    int *arr[5]; // stack
    arr[0] = new int(10);
    arr[1] = new int(20);
    arr[2] = new int(30);
    arr[3] = new int(40);
    arr[4] = new int(50);

    for (int i = 0; i < 5; i++)
    {
        cout << "Element = " << *arr[i] << endl;
    }

    delete arr[2];

    for (int i = 0; i < 5; i++)
    {
        delete arr[i];
        arr[i] = NULL;
    }
    return 0;
}

int main2()
{
    // int arr[5]; // stack
    int *arr = new int[5]; // heap
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    for (int i = 0; i < 5; i++)
    {
        cout << "Element = " << arr[i] << endl;
    }
    delete[] arr;
    return 0;
}

int main1()
{
    int arr[5];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    for (int i = 0; i < 5; i++)
    {
        cout << "Element = " << arr[i] << endl;
    }
    return 0;
}