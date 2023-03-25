#include <stdio.h>

char *_strbrk(char *s, char *accept)
{
    int i, j;
    char *p;
    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = 0; accept[j] != '\0'; j++)
        {
            if (accept[j] == s[i])
            {
                p = &s[i];
                return p;
            }
            j++;
        }
        i++;
    }
    return (0);
}

int main(void)
{
    char *s = "Hello";
    char *f = "world";
    char *t;
    t = _strbrk(s, f);
    printf("The allocated full string is: \n", t);
    return 0;
}