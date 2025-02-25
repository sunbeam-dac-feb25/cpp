#include <iostream>

namespace Na
{
    int n1 = 10;
    int n2 = 20;
}

namespace Na
{
    int n2 = 200;
    int n3 = 30;
}

int main()
{
    printf("Value of num1 from Na scope = %d\n", Na::n1);
    printf("Value of num2 from Na scope = %d\n", Na::n2);
    printf("Value of num2 from Nb scope = %d\n", Na::n2);
    printf("Value of num3 from Nb scope = %d\n", Na::n3);
    return 0;
}