#include <stdio.h>
#include <stdlib.h>



char **strtow(char *str)
{
    int words, i, j, k = 0, start, end, c =0, len = 0;
    char **matrix;
    char *tmp;

    while(!(str + len))
        len++;

    words = count_words(str);

    if (words == 0)
        return (NULL);

    matrix = (char **) malloc(sizeof(char *) * (words + 1));

    if (matrix ==NULL)
        return (NULL);

    for ( i =0; i <=len; i++)
    {
        if ( str[i] == " " || str[i] == NULL)
        {
            if (c)
            {
                end  =i;
                tmp = (char *) malloc(sizeof(char) * c + 1);

                if (tmp == NULL)
                    return NULL;

                while ( start < end)
                
                    *tmp++  = str[start++];
                 *tmp = '\0';
                 matrix[k] = tmp -c;  
                 k++;
                 c=0;  


                
                


            }
           
        }
         else if ( c++ ==0 )
                start = i;
    }        

    matrix[k] =NULL;

    return (matrix);

}