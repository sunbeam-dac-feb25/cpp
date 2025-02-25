#include <iostream>
// namespace must be created globally
namespace Na
{
    int n1 = 10;
    int n2 = 20;

    namespace Nb
    {
        int n2 = 200;
        int n3 = 30;
    }

}

int n2 = 2000;
int main1()
{
    printf("Value of num1 from Na scope = %d\n", Na::n1);
    printf("Value of num2 from Na scope = %d\n", Na::n2);
    printf("Value of num2 from Nb scope = %d\n", Na::Nb::n2);
    printf("Value of num3 from Nb scope = %d\n", Na::Nb::n3);
    return 0;
}

using namespace Na;
int main()
{

    printf("Value of num1 from Na scope = %d\n", n1);
    printf("Value of num2 from Na scope = %d\n", Na::n2);
    using namespace Nb;
    printf("Value of num2 from Nb scope = %d\n", Nb::n2);
    printf("Value of num3 from Nb scope = %d\n", n3);
    return 0;
}