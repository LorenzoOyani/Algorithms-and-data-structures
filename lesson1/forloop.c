#include <stdio.h>

int main(void)
{
    int i;

    printf("Hex(uppercase)     Hex(lowercase)    Decimal\n ");
    for( i =0; i <16; i++)
    {
        printf("%x          %x           %d\n", i, i, i);
    }
    return 0;
}