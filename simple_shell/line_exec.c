#include "shell.h"

char **splitstring(char *str, const char *delim)
{
    int i, wn;
    char **array;
    char *token;
    char *copy;

    copy = malloc(sizeof(str) + 1);

    if (!str || copy == NULL)
    {
        perror(_getenv("_"));
        return (NULL);
    }

    i = 0;

    while (str[i])
    {
        copy[i] = str[i];
        i++;
    }
    copy[i] = '\0';

    token = strtok(copy, delim);
    array = malloc(sizeof(char *) * 2);

    i = 1;
    wn = 3;

    while (token)
    {
        token = strtok(NULL, delim);
        _realloc(array, (sizeof(char *) * (wn - 1)), (sizeof(char *) * wn));
        array[i] = _strdup(token);
        i++;
        wn++;
    }
    free(copy);
    return (array);
}

/**
 * execute - executes a command
 * @argv: array of arguments
 */

void execute(char **argv)
{
    int d, status;
    if (!argv || !argv[0])
        return;
    d = fork();
    if (d == -1)
    {
        perror(_getenv("_"));
    }
    if (d == 0)
    {
        execve(argv[0], argv, environ);
        perror(argv[0]);
        exit(EXIT_FAILURE);
    }
    wait(&status);
}

void _realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    char *new;
    char *old;

    unsigned int i;
    if (ptr == NULL)
        return (malloc(new_size));

    if (new_size == old_size)
        return ptr;
    if (new_size == 0 || !ptr)
    {
        free(ptr);
        return NULL;
    }

    new = malloc(new_size);
    old = ptr;
    if (new == NULL)
        return NULL;

    if (new_size > old_size)
    {
        for (i = 0; i < old_size; i++)
        {
            new[i] = old[i];
        }
        free(ptr);
        for (i = old_size; i < new_size; i++)
        {
            new[i] = '\0';
        }
        if (new_size < old_size)
        {
            for (i = 0; i < new_size; i++)
                new[i] = old[i];
            free(ptr);
        }
    }
    return (new);
}