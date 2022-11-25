#include <stdio.h>
#include <stdlib.h>


void free_memory_grid( char **grid, unsigned int  n)
{
    if(grid !=NULL || n != 0)
    {
        for(; n > 0; n --)
            free(grid[n]);
            free(grid[n]);
            free(grid);
    }
}

char **strtow(char *str)
{
    char **aout;
    unsigned int i, j, height, c, al;

    if(str ==NULL || *str == '\0')
            return NULL;

    for(c = height = 0; str[c] != '\0'; c++)
            if(str[c] == ' ' && (str[c + 1] ==  ' ' || str[c + 1] == '\0'))
                    height++;        

    aout = malloc(sizeof(char *) * height +1);
    if(aout == NULL)
    {
        free(aout);
        return NULL;
    }
    for(i = al = 0; i < height; i++)
    {
        for (c =al; str[c] !='\0'; c++)
        {
            if(str[c] ==  ' ')
                al++;

            if(str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
            {
                aout[i] = malloc(sizeof(char ) * c- al + 2);
                if(aout[i] == NULL)
                {
                    free_memory_grid(aout, i);
                    return NULL;
                }
                break;
            }    
        }
        for(j = 0; al <= c; al++, j++)
                aout[i][j] =  str[al];
                aout[i][j] = '\0';

    }
    aout[i] = NULL;
    return (aout);                
}