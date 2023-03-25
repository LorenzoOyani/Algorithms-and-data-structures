#include <stdio.h>
#include <stdlib.h>

int _strlen(char *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        return 0;
    }
}

char *str_concat(char *s1, char *s2)
{
    int size1, size2, i;
    char *malloc_Size;

    if (s1 == NULL)
        return NULL;

    if (s2 == NULL)
        return NULL;

    size1 = _strlen(s1);
    size2 = _strlen(s2);

    malloc_Size = malloc(sizeof(char *) * (size1 + size2) + 1);
    if (malloc_Size == NULL)
        return NULL;

    for (i = 0; i < size1 + size2; i++)
    {
        if (i < size1)
        {
            malloc_Size[i] = s1[size1];
        }
        else
        {
            malloc_Size[i] = s2[i - size1];
        }
    }
    malloc_Size[i] = '\0';
    return (malloc_Size);
}