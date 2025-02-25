#include <iostream>

int n1 = 10; // global namespace

// namespace must be created globally
namespace Na
{
    int n1 = 30;
}

int main()
{

    // :: scope resolution operator
    int n1 = 20;
    printf("Value of num1 from global scope = %d\n", ::n1);
    printf("Value of num1 from local scope = %d\n", n1);
    printf("Value of num1 from Na scope = %d\n", Na::n1);

    return 0;
}