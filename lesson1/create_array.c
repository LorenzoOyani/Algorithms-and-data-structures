#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
    char *p;
    char *saved;
    int  i;
    if ( size == 0)
    {
        return (NULL);
    }
    p = malloc(sizeof(char) * size);

    if( p == NULL)
    {
    return (NULL);
    }
        
    saved = p;
    for(i = 0; i < size; i ++)
    {
        p[i] = c;

    }
    // while (i < size)
    // {
    //     *p = c;
    //      p = p + 1 ;
    //      i++
    // }
    return (saved);
}

