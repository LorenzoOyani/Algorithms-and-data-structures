#include <stdio.h>
#include <stdlib.h>


void printHello()
{
    printf("Hello, world\n");
}

int *add(int* a, int *b)
{
    int *c;
    c = (int*)malloc(sizeof(int));
    if(c == NULL)
        return (NULL);

    *c = (*a) + (*b);    
    return c;
}

int main()
{
    int a =2, b = 5;
    int *ptr;
    ptr = add(&a, &b);
    printHello();
    printf("The sum of integers is: %d \n", *ptr);

}

/**
 * call by reference
*/

