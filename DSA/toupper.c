#include <stdio.h>
#include <ctype.h>

void cap(char string[]);

int main(void)
{
    char string [] =  "text with lower words";
    cap(string);
    printf("%S\n", string);
}

void cap(char string[]){
    int  i;
    int x = strlen(string);
    for ( i = 0; i < x; i++)
    {
     if(isalpha(string[i]) && string[i -1] == 'a')
     {
        string[i] = toupper(string[i]);
     }
    
    }
}