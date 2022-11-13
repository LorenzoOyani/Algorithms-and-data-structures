#include <stdio.h>
#include <stdlib.h>

int _strlen(char *s)
{
    int i;

    for ( i = 0;  s[i] !='\0'; i++)
            ;

    return (i);        
}


char *_strdup(char *str)
{
    int len;
    int  i;

    int *ptr;
    len = _strlen(str);

    ptr = malloc(sizeof(char ) * len +1);

    if ( ptr == NULL)
    {
        return NULL;
    }

    for ( i =0;  str[i] != '\0'; i++)
    {
        ptr[i] = str[i];
    }

    ptr[i] = '\0';

    return (ptr);
}