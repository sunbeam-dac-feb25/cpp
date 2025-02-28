#include <iostream>
using namespace std;

int main()
{
    int **arr = new int *[2];
    // we have to allocate the memory for the second dimension
    arr[0] = new int[3];
    arr[1] = new int[3];

    arr[0][0] = 10;
    arr[0][1] = 20;
    arr[0][2] = 30;
    arr[1][0] = 40;
    arr[1][1] = 50;
    arr[1][2] = 60;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Element = " << arr[i][j] << endl;
        }
    }

    for (int i = 0; i < 2; i++)
    {
        delete[] arr[i];
        arr[i] = NULL;
    }
    delete[] arr;
    arr = NULL;

    cout << "Program Finished" << endl;
    return 0;
}

int main1()
{
    int arr[2][3];
    arr[0][0] = 10;
    arr[0][1] = 20;
    arr[0][2] = 30;
    arr[1][0] = 40;
    arr[1][1] = 50;
    arr[1][2] = 60;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Element = " << arr[i][j] << endl;
        }
    }
    return 0;
}