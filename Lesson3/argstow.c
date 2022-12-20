#include <stdio.h>
#include <stdlib.h>
#include <string.h>



/**
 * *argstostr - description
 * @ac: int
 * @av: arguments
 * Return: string
 */

char *argstow(int argc, char **argv)
{
    int i,  nc = 0, j =0, memp = 0;
    char *s;
    if(argc == 0 || argv ==NULL)
            return NULL;
    for ( i = 0; i < argc; i++, nc++)
    {
        nc += strlen(argv[1]);
    }
    s = malloc(sizeof(char)* nc + 1);
    if(s ==0)
        return NULL;

    for( i = 0; i < argc; i++)
    {
        for( j  =0; argv[i][j] !='\0'; j++, memp++)
        {
            s[memp]  = argv[i][j];      
        }
        s[memp] = '\n';
        memp++;
    }
    s[memp] = '\0';
    return (s);

}