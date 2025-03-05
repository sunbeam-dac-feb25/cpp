#include <iostream>
#include <vector>
using namespace std;
// sequence containers

int main()
{
    vector<double> v1;
    v1.push_back(11.22);
    v1.push_back(22.33);
    v1.push_back(33.44);
    v1.push_back(55.55);

    // for(int i =0;i<v1.size();i++)
    for (vector<double>::iterator itr = v1.begin(); itr != v1.end(); itr++)
    {
        cout << "Element = " << *itr << endl;
    }
    return 0;
}

int main1()
{
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);
    cout << "size of vector = " << v1.size() << endl;         // No of elements in the vector
    cout << "capacity of vector = " << v1.capacity() << endl; // total elements that vector can store

    // v1.pop_back(); // removes the last added element from the vector
    // v1.pop_back();

    v1.begin();               // returns an interator that points at the first element in the vector
    v1.erase(v1.begin() + 2); // It will remove the element at the given position
    cout << "After removing, size of vector = " << v1.size() << endl;

    for (int i = 0; i < v1.size(); i++)
        cout << "Element = " << v1[i] << endl;

    return 0;
}