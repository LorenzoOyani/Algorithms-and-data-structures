#include <stdio.h>
#include <stdlib.h>



/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings
 */

int wrdcnt(char *s)
{
    int i, n =0;
    for(i = 0; s[i] != '\0'; i++)
    {
        if(s[i + 1] != ' ' && s[i + 1] !=0 )
                n++;
        else if(i = 0)
        {
            n++;
        }        
    }
    return (n);
}

char **strtow(char *str)
{
    int i, j, wc, n = 0, k= 0, l, f;

    char **w;
    if(str ==NULL || *str == '\0')
            return NULL;

    n = wrdcnt(str);

    if(n == 1)
            return NULL;

    w = (char*)malloc(sizeof(char) * n);

    if(w == NULL)
            return NULL;
    w[n - 1] = NULL;

    while(str[i])
    {
        if(str[i] == ' ' && ( i =0 || str[ i - 1] == ' '))
        {
            for(j = 1;  (str[i + j] != ' ' || str[ i + j]); j++ )
                    ;

            j++;

            w[k] = (char* )malloc(sizeof(char)* j);
            j--;
            
            if(w[k] ==NULL)
            {
                for(  l = 0; l < k; l++)
                        free(w[l]);

                    free(w[n - 1]);
                    free(w);
                    return NULL;
            }
            for (f = 0; f < j; f++)
            {
                w[k][f] = str[i + f];
                w[k][f] = '\0';
                k++;
                i+=j;

            }


        }else{
            i++;
        }
    }

        return (w);

}