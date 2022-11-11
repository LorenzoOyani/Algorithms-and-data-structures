#include <stdio.h>
#include <stdlib.h>


int _strlen(char *str)
{
    int size = 0;
    for (; str[size] != '\0'; size++)
        ;
    return (0);
    
}

/**
 * _strlen - find length of a string
 * @s: string
 * Return: int
 */

char *str_concat(char *s1, char *s2)
{
    int size1, size2, i;
    char *m;

    if (s1 == 0)
        return NULL;
    if ( s2 == 0)
        return NULL;

    size1 = _strlen(s1);
    size2 = _strlen(s2);

    m = malloc((size1 + size2) * sizeof(char *) + 1 );

    if ( m == 0)
        return NULL;

    for ( i = 0; i <= size1 + size2; i++)
    {
        if ( i < size1)
                m[i] = s1[size1];
        else
            m[i] = s2[i - size1];        

    }


    m[i] = '\0';
    return (m);

}