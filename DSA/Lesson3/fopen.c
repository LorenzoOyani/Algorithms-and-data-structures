#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>




ssize_t read_textfile(const char *filename, size_t letters)
{
     if(filename != NULL) 
     {
            int fd, count;
            char *buf;
            ssize_t r_bytes, w_bytes;

            fd = open(filename, O_RDONLY);
            if (fd == -1)
                    return(0);

            buf = malloc(letters + 1);
            if(buf ==NULL)
                    return(0);
            buf[letters] = 0;

            r_bytes = read(fd, buf, letters);   

            if(read == -1)
                    return (0);    

            w_bytes = write(STDOUT_FILENO, buf, r_bytes);  
            if(w_bytes == -1)
                    return (0);

            if(r_bytes !=w_bytes)
                        return(0);
            free(buf);
            close(fd);

            return (w_bytes);

     }else
        return (0);
     
    

          
    
}