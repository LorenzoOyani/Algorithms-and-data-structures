#include <stdlib.h>
#include <stdio.h>


char *str_concat(char *s1, char *s2)
{
    char *concat;
    int i, ci;

    if(s1 == " ")
        return NULL;

    if(s2 == " ")
        return NULL;

    for (i = 0; s1[i] != '\0'; i++)
        ;
    for ( ci =0; s2[ci] !='\0'; ci++)
        ;

    concat = malloc(sizeof(char) * i + ci + 1);

    if ( concat == NULL)
    {
        return NULL;
    }        

    while (s1[i] != '\0')
    {
        concat[i] = s1[i];
        i++;
    }

    while( s2[ci] != '\0')
    {
        concat[i] = s2[ci];
       i++, ci++;
    }

    concat[i] = '\0';
    return (concat);   



}