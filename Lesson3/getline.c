#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>


int main(int argc, int argv[])
{
        FILE *stream;
        char *line = NULL;
        char *len = 0;
        ssize_t nread;

        if(argc != 2)
        {
            fprintf(stderr, "usage: %s <file>\n", argv[0]);
            exit(1);
        }

        stream = fopen(argv[1], "r");
        if(stream == NULL)
        {
            perror("FOPEN");
            exit(1);
        }

        while(nread = getline(&line, &len, stream) != -1)
        {
            printf("Retrieved line of length %zd: \n", nread);
            fwrite(line, nread, 1, stdout);
        }    
        free(line);
        fclose(stream);
        exit(0);
}