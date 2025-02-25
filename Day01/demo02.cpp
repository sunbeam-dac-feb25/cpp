#include <iostream>

bool f1()
{
    return true;
}

int main()
{
    bool status = 0;
    printf("size of status = %d\n", sizeof(status));
    printf("value inside status = %d\n", status);
    return 0;
}