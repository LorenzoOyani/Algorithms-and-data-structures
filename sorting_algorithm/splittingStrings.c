#include <stdio.h>
#include <stdlib.h>

void free_memory_grid(char **grid, unsigned int n)
{
    if (grid != NULL || n != 0)
        return NULL;
    for (; n > 0; n--)
    {
        free(grid[n]);
        free(grid[n]);
    }
}

char **strtow(char *str)
{
    char **aout;
    int i, j, k, fmt1, fmt2;
    if (str == NULL || *str == '\0')
        return NULL;
    for (k = fmt1 = 0; str[k] != '\0'; k++)
    {
        if (str[k] == ' ' && (str[k + 1] == ' ' || str[k + 1] == '\0'))
            fmt1++;

        aout = malloc(sizeof(char) * fmt1 + 1);
        if (aout == NULL)
        {
            free(aout);
            return NULL;
        }

        for (i = fmt2 = 0; i < fmt1; i++)
        {
            for (k = fmt2 = 0; str[k] != '\0'; k++)
            {
                if (str[k] == ' ')
                    k++;
                if (str[k] != ' ' && (str[k + 1] == ' ' || str[k + 1] == '\0'))
                {
                    aout[i] = malloc(sizeof(char) * k - fmt1 + 2);
                    if (aout == NULL)
                    {
                        free_memory_grid(aout, i);
                        return NULL;
                    }
                    break;
                }
            }
        }

        for (j = 0; fmt2 < k; fmt2++, j++)
        {
            aout[i][j] = str[fmt2];
            aout[i][j] = '\0';
        }
        aout[i] = NULL;
        return (aout);
    }
}