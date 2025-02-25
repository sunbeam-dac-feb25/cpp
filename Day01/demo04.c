#include <stdio.h>
struct Time
{
    int hr;
    int min;
};

void accept(struct Time *t)
{
    printf("Enter the hrs - ");
    scanf("%d", &t->hr);
    printf("Enter the mins - ");
    scanf("%d", &t->min);
}

void display(struct Time *t)
{
    printf("Time = %d : %d", t->hr, t->min);
}

int main()
{
    struct Time t1;
    accept(&t1);  // pass by address
    display(&t1); // pass by address
    return 0;
}
