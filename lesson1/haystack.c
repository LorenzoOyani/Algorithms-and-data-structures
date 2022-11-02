#include <stdio.h>
#include <string.h>



char * _strstr(char *haystack, char *needle)
{
    int i,j;
    for( i = 0; haystack[i] > '\0'; i++)
    {
        for( j = i; haystack[j] > '\0' && needle[j - i] > '\0'; j++)
        {
            if(haystack[j] != needle[j - i])
            break;
        }
        if(needle[j - i] == '\0')
        {
            return (haystack + i);
        }
        return(0);
    }

}

int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strstr(s, f);
    printf("%s\n", t);
    return (0);
}