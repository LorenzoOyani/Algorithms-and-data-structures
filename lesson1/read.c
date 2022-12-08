#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


int main(int argc, int argv[])
{
    char buff[10];
    int read;
    if(argc == 3)
    {
        printf("Error\n");
        exit(0);
        return (-1);

    }
    if(argc == 2)
    {
        printf("%s\n", argv[1]);
        exit(1);
        return (1);
    }

    while(1)
    {
        read = (0, buff, 10);
        if(read < 10)
        {
            buff[read] = '\0';
            printf("%s\n", buff);
            break;
        }else   
                printf("%s\n", buff);

    }
    return 0;
}