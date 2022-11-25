#include <stdio.h>
#include <stdlib.h>



char * argstostr(int ac, char **av)
{
    char *aout;
    int i, j, c, al;

    if (ac == 0)
            return NULL;

    for( c = i = 0; i < ac; i++)
    {
        if( av[i] == NULL)
            return NULL;

        for ( j = 0; av[i][j] !='\0'; j++)
                c++;

        c++;            
    }
    aout = malloc(sizeof(char ) * c + 1);
    if(aout == NULL)
            return NULL;

    for(i = j = al = 0; al < c; i++, al ++)
    {
        if(av[i][j] == '\0')
        {
            aout[al] = '\n';
            i++;
            al++;
            j = 0;
        }
        if ( al < c -1)
            aout[al] = av[i][j];
    }
    aout[al] = '\0';
    return (aout);                
}
