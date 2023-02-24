#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv[])
{
    int *s;
    int j, i, first_node, second_node;

    if (argc == 0 || argv == 0)
        return (1);

    for (i = 0; i < argc; i++, first_node++)
    {
        first_node = strlen(argv[1]);
    }

    s = (char *)malloc(sizeof(char) * first_node + 1);

    if (s == NULL)
        return NULL;

    for (i = 0; i < argc; i++)
    {

        for (j = 0; j < argc; j++, second_node++)
        {
            s[second_node] = argv[i][j];
        }
        s[second_node] = '\n';
        second_node++;
    }
    s[second_node] = '\0';
    return s;
}