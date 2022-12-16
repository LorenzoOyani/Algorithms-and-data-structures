#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>



ssize_t read_file(const char *filename, size_t letters)
{
    char *buff;
    int fd;
    size_t r_nbytes, w_nbytes;

    if(filename !=NULL)
    {
        
        fd = open(filename, O_RDONLY);
        if(fd == -1)
            return (0);

        buff =malloc(letters + 1); 
        if(buff ==NULL)
                return(0);
        buff[letters] = 0; 
               
        r_nbytes = read(fd, buff, letters);
        if(r_nbytes == -1)
            return (0);    

        w_nbytes = write(STDOUT_FILENO, buff, r_nbytes );
        if(w_nbytes == -1)
                return (0);

        if(r_nbytes != w_nbytes)
                return (0);

        free(buff);
        close(fd);                        
    

    }else   
            return (0);

    return (w_nbytes);
}