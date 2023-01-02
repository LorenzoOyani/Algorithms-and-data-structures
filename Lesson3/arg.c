#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char** argv[])
{
    int *s;
    int j, i,f_nod = 0, s_node =0;

    if(argc == 0 || argv ==NULL)
            return (1);
    for( i =0; i < argc; i++, f_nod++)
    {
        f_nod = strlen(argv[1]);
    }
    s = malloc(sizeof(char)* f_nod + 1);

    if(s == NULL)
        return NULL;
    for( i = 0; i <argc; i++)
    {
        for(j = 0; argv[i][j] !='\0'; j++, s_node++)
        {
            s[s_node] = argv[i][j];
            
        }
        s[s_node] = '\n';
        s_node++;
       

    }  
    s[s_node] = '\0';
    return (s);




}