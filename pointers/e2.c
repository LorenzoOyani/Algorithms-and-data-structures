#include <stdio.h>

//dereferencing of pointers

int main()
{
    int n;
    int *p;

    n =97;

    p = &n;

    printf("The value of 'n': %d\n", n);
    printf("The address of 'n' : %p\n", p);
    printf("The the value of 'p' : %p\n", p);

    *p = 500;
    printf("The value of 'n': %d\n", n);
    return 0;
}