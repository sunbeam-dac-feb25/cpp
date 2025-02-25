#include <iostream>
// Default Argument Function
void add(int n1, int n2, int n3 = 0, int n4 = 0)
{
    printf("Addition = %d\n", (n1 + n2 + n3 + n4));
}

void multiplication(int n1, int n2, int n3 = 1, int n4 = 1)
{
    printf("Multiplication = %d\n", (n1 * n2 * n3 * n4));
}
int main()
{
    add(10, 20);
    add(10, 20, 30);
    add(10, 20, 30, 40);

    multiplication(2, 3);
    multiplication(2, 3, 4);
    multiplication(2, 3, 4, 5);
}