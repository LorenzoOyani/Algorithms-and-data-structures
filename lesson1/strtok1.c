#include <stdio.h>
#include <string.h>


int main(void)
{
    char s[] = "How are you doing today bro";
    char *arr[7];
    int i = 1;

    arr[0] = strtok(s, " ");
    while((arr[i] == strtok(NULL, " ")) != NULL)
            i++;
    for(int j = 0; arr[j] != NULL; j++)
    {
        printf("token: %s\n", arr[j]);
    }        

    return (0);
}