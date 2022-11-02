#include <stdio.h>
#include <string.h>


char * _strpbrk(char *s, char *accept)
{
    int i , j;
    char *p;

for ( i = 0; s[i] != '\0'; i++)
{
for( j = 0; accept[j] !='\0'; j++)
{
if(accept[i] == s[i])
{
 p = &s[i];
 return (p);
}
j++;
}
i++;
}
return (0);
}

int main (void)
{
    char *s = "hello, world";
    char *f ="world";
    char *t;

    t = _strpbrk(s,f);
    printf("%s\n", t);
    return (0);
}