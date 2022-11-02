#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
    char *s  = "Hello";
    char *f;

    f = strchr(s, 'l');
    if( f !=NULL)
    {
        printf("%s\n", f);
    }
    return (0);
}