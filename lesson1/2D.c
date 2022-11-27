#include <stdio.h>
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
    int **ptr;
    int i, j;

    if( width <= 0 || height <=0)
            return NULL;

    ptr = malloc(sizeof(*ptr) * height);

    if(ptr == NULL)
            return NULL;
    for (i =0; i < height; i++)
    {
        ptr[i] = malloc(sizeof(ptr) * width);
        if(ptr[i] == NULL)
        {
            while(i--)
            {
                    free(ptr[i]);
                    free(ptr);
                    return NULL;
            }
          
        }
        
        for( j = 0 ; j < width; j++)
        {
            ptr[i][j] = 0;
        }
    }
    return (ptr);                 
}