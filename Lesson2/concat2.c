#include <stdio.h>
#include <string.h>


char *str_concat(char *str1, char *str2)
{
    int i, j;
    int *concat;

    if( str1 == NULL)
        return NULL;

    if( str2 == NULL)
        return NULL;

    for ( i = 0; str1[i] !='\0'; i++ )
            ;
    for( j = 0; str2[j] !='\0'; j++)
            ;
    concat = malloc(sizeof(char *) * i + j + 1 );
    if(concat == NULL)
    {
        return NULL;
    }

    for ( i = 0 ;  str1[i] !='\0'; i++)
    {
        concat[i] = str1[i];
    }

    for ( j =0; str2[j] !='\0'; j++ )
    {
        concat[i] = str2[j];
    }

    concat[i] = '\0';
    i++;
    return (concat);                
}