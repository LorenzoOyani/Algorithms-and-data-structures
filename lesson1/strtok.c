#include <stdio.h>
#include <string.h>


#define MAX_SIZE 512
int main(void)
{
    char s[MAX_SIZE];
    strcpy(s, "The grind");
    char* token = strtok(s, " ");

    while(token !=NULL)
    {
        printf("token: %s\n", token);
        token = strtok(NULL, " ");
    }

}