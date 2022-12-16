#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
    printf("%u\n", getpid());
    return(0);
}