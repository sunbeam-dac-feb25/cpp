#include <iostream>

int main()
{
    wchar_t ch = L'A';
    printf("size of ch = %d\n", sizeof(ch));
    printf("value inside status = %d\n", ch);
    printf("value inside status = %c\n", ch);
    return 0;
}