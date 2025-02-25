#include <iostream>
// function overloading
// add_i_i -> Mangaled Name
void add(int n1, int n2) // no of parameters - 2
{
    printf("Addition = %d\n", (n1 + n2));
}

// function overloading
// Defining functions with same name but different signature
// add_i_i_i
void add(int n1, int n2, int n3) // no of parameters - 3
{
    printf("Addition = %d\n", (n1 + n2 + n3));
}

void add(int n1, int n2, int n3, int n4) // no of parameters - 4
{
    printf("Addition = %d\n", (n1 + n2 + n3 + n4));
}

void square(int n) // type of parameter - int
{
    printf("square = %d\n", (n * n));
}

void square(double n) // type of parameter - double
{
    printf("square = %d\n", (n * n));
}
// divison_i_d
void divison(int n, double d) // order of parameter - (int,double)
{
    printf("division = %lf\n", (n / d));
}

void divison(double n, int d) // order of parameter - (double,int)
{
    printf("division = %lf\n", (n / d));
}

int main()
{
    divison(10, 2.5); // divison_i_d
    divison(10.5, 2);

    return 0;
}

int main2()
{
    square(5);
    square(5.5);
    return 0;
}

int main1()
{
    add(10, 20);
    add(10, 20, 30);
    add(10, 20, 30, 40);
    return 0;
}