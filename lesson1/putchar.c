#include <stdio.h>


int putc(int c, FILE *stream);


int main(void)
{
    int ch;
    ch =65; /*numerical value of the Alphabet A*/
    printf("The character that has numeric value of 65 is: \n");
    putc(ch, stdout);
    return 0;

}