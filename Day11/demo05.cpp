#include <iostream>
using namespace std;
// subscript operator Overloading

class myVector
{
    int *ptr;
    int size;
    int index;

public:
    myVector(int size = 5)
    {
        ptr = new int[size];
        this->size = size;
        index = 0;
    }

    void push_back(int element)
    {
        ptr[index] = element;
        index++;
    }

    int &operator[](int index)
    {
        return ptr[index];
    }

    int getElement(int index)
    {
        return ptr[index];
    }

    int getSize()
    {
        return index;
    }
};

int main()
{
    myVector v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);

    cout << "Size of v1 = " << v1.getSize() << endl;

    // cout << "Element at index 3 = " << v1.getElement(3) << endl;
    cout << "Element at index 3 = " << v1[3] << endl; // v1.operator[](3);
    v1[3] = 300;
    cout << "After change, Element at index 3 = " << v1[3] << endl; // v1.operator[](3);
    return 0;
}