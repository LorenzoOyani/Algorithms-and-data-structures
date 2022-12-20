#include <stdio.h>
#include <fcntl.h>


int main()
{
    FILE *fp;
    char str[100];

    fp = open("file.txt", O_RDONLY);
    if(fp == -1)
    {
        perror("Error opening file");
        return(-1);
    }
    
    if(fgets(str, 100, fp) !=NULL)
    {
        puts(str);

    }
    fclose(fp);

    return (0);
}