#include <stdio.h>
#include <stdlib.h>



/**
 * *_strdup - return a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: string
 * Return: 0
 */


char *_strdup(char *str)
{
    int i = 0,  size = 0 ;

    char *n;

    if ( str == NULL)
            return NULL;

    for(; str[size] !='\0'; size++)
            ;

    n = malloc(size * sizeof(*str) + 1 );

    if ( n == NULL)
        return NULL;

    for (; i < size; i++)
    {
        n[i] = str[i];
    }    

    return (n);

}