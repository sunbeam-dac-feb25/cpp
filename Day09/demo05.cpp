#include <iostream>
#include <map>
using namespace std;

int main()
{
    // map<key,value> m1;
    map<int, string> m1;
    m1[101] = "Anil";
    m1[378] = "Ramesh";
    m1[425] = "Suresh";
    m1[251] = "Mukesh";

    // duplicate keys are not allowed
    m1[425] = "Ram";    // It will replace the value for the given present key
    m1[567] = "Ramesh"; // Duplicate values are allowed

    cout << "No of elements = " << m1.size() << endl;
    cout << "student with roll no 251 = " << m1.at(251) << endl;

    for (map<int, string>::iterator itr = m1.begin(); itr != m1.end(); itr++)
    {
        cout << itr->first << " - " << itr->second << endl;
    }
    return 0;
}