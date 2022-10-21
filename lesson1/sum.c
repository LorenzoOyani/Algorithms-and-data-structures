#include <stdio.h>

int integer_add(int x, int y)
{
    int sum;
    sum = x + y;
    return sum;
}

int main(void)
{
    int add;
    add = integer_add(5, 4);
    printf("The sum of the values of 5 and 4 is %d\n", add);
    return 0;
}