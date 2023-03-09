#include <stdio.h>
#include <stdlib.h>

char *argStringCount(int argc, int **argv[])
{
    int i, j, ci, cj;
    char *memory;

    if (argc == NULL)
        return NULL;
    for (ci = i = 0; i < argc; i++)
    {
        if (argv[i] == NULL)
            return NULL;
        for (j = 0; argv[i][j] != '\0'; j++)
        {
            ci++;
        }
        ci++;
    }
    memory = malloc(sizeof(char) * ci + 1);
    if (memory == NULL)
        return NULL;

    for (i = j = cj = 0; cj < ci; i++, cj++)
    {
        if (argv[i][j] = '\0')
        {
            memory[cj] = '\n';
            cj++;
            i++;
            j = 0;
        }
        if (cj < ci - 1)
        {
            memory[cj] = argv[i][j];
        }
    }
    memory[cj] = '\0';
    return memory;
}
