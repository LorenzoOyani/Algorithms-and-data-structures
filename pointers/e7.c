#include <stdio.h>

/**
 * modify_my_param -set the integer to 402
 * @m: a pointer the integer we want to set to 402
 * 
 * Return: nothing
*/


void modify_my_param(int *m)
{
    printf("value of 'm' : %p\n", m);
    printf("Address of 'm': %p\n", &m);

    *m =402;
}


int main(void)
{
    int n;
    int *p;

    p = &n;
    n =98;

    printf("value of 'n' before call : %d\n", n);
    printf("Address of 'n' : %p\n", &n);
    printf("value of 'p': %p\n", p);
    printf("Address of 'p' : %p\n", &p);
    modify_my_param(p);
    printf("value of 'n' after the call : %d\n", n);
}