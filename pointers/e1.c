#include <stdio.h>


int main()
{
    int n;
    int *p;
    n =93;

    p = &n;
    printf("Address of 'n': %p\n", &n);
    printf("value of 'p' : %p\n", p);
    return 0;
}