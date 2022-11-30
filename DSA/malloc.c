#include <stdio.h>
#include <stdlib.h>

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */

int count_strings(char *str)
{
    int flag = 0, i = 0, len;
    for(len = 0; str[len] !='\0'; len++)
    {
    
        if(str[i] == ' ')
        {
            flag = 0;
        }else if(flag ==0){
            flag = 1;
            i++;
        }
        

    }

    return (i);
    
}

char **strstow(char* str)
{
    char **matrix, *temp;
    int i, len, words, c = 0, start, end, k = 0;

    while(*(str + len))
            len++;

    words = count_strings(str);    
    if(words ==0)
            return NULL;    
    
    matrix = (char**)malloc(sizeof(char *) * words + 1 );

    if(matrix == NULL)
            return (NULL);

    for(i = 0; i <=len; i++)
    {
        if(str[i] == ' ' || str[i] == '\0')
        {
            if(c)
            {
                end = i;
                temp = (char*)malloc(sizeof(char) * c + 1);
                if(temp == NULL)
                        return NULL;

                while(start < end)
                    *temp++ = str[start++];

                matrix[k] = temp -c;
                k++;
                c =0;


            }
        }
        else if(c++ == 0)
            start = i;
    }        

    matrix[k] = NULL;
    return (matrix);
}