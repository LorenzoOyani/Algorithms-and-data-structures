#include <stdio.h>

int main(void)
{

    int i;
    i =65;
    do {
        printf("The numerical value of %c is %d", i, i);
        i++;
    }while( i < 80);
    return 0;
}