#include <stdio.h>

//dereferencing pointers, examples withh int and char.

int main()
{
    int n;
    int *p;
    char c;
    char *pp;

    c = 'H';
    pp = &c;
    p = &n;

    printf("value of 'c' : %d ('%c')\n ", c, c );
    printf("Address of 'c' : %p\n", &c);
    printf("value of 'pp' : %p\n", pp);
    printf("value of 'n' : %d\n", n);
    printf("Address of 'n' : %p\n", &n);
    printf("value of 'p': %p\n", p);

    *p =900;
    *pp = 'J';

    printf("The value of 'n' : %d\n", n);
    printf("The value of '*pp' : %d\n", *pp);
    printf("Value of 'c': %d ('%c')\n", c, c);
    printf("Value of '*pp': %d ('%c')\n", *pp, *pp);
    return (0);

}