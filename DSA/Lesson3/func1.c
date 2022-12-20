#include <stdio.h>
void printHello(char *name)
{
    printf("Hello %s\n", name);
}

// int add(int a, int b)
// {
//     return a+ b;
// }

int main()
{

    void(*ptr)(char*);
    ptr = &printHello;
    ptr("Lorenzo");

    // int i;
    // int (*p)(int, int);
    // p = &add;

    // i = (*p)(2,3);
    // printf("The value of the function pointer is: %d\n", i);
}