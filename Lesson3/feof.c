#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE *stream;
    int c;

    if(stream == NULL)
    {
        perror("FOPEN");
        exit(1);
    }

    stream = fopen("file.txt", "r");

    while(1)
    {
        c = fgetc(stream);
        if(feof(stream)){
            break;
        }
        printf("%c", c);
        break;
    }
    

    fclose(stream);
    return(0);
}