#include <iostream>
using namespace std;

int main()
{
    int n1 = 10;
    // int &ref; // NOT OK
    // ref = n1;

    int n2 = 20;
    int &ref = n1;
    //&ref = n2; // NOT OK // We cannot reassign the reference once initialized
    ref = n2; // here the value inside n2 is copied in the n1 which is pointed by ref

    // int &ref2 = new int(10); // NOT OK
    //  refererence can be cretated only for the existing memory
    return 0;
}