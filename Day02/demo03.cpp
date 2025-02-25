#include <iostream>

inline void square(int n)
{
    printf("square = %d", (n * n));
}

int main()
{
    square(5);
    // printf("square = %d", (n * n));
    // the function body will be replaced at the function call
    // at compile time
    return 0;
}