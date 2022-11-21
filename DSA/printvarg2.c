#include <stdio.h>
#include <stdarg.h>

void myPrintf(char *, ...);
char * convert(unsigned int, int);


char * convert(unsigned int num, int base)
{
    static char representation [] = "123456789ABCDEF";
    static char buffer[50];

    char *ptr;

    ptr = &buffer[49];
    *ptr = '\0';

    do{
           *--ptr = representation[num % base];
           num /=base;
      }while(num !=0);
      
            return (ptr);
      
}


void myPrintf(char* format, ...)
{
    char * traverse;
    unsigned int  i;
    char *s;

    va_list args;
    va_start(args, format);
    for (traverse = format; traverse !='\0'; traverse++)
    {
        while(*traverse != '%')
            printf(*traverse);
            traverse++;
    }
    traverse++;

    switch(*traverse)
    {
        case 'c': i = va_arg(args, int);    //fetch character argument;
                        putchar(i);
                        break;

        case 'd': i = va_arg(args, int);
                    if( i < 0)
                    {
                        i =- 1;
                        putchar('-');
                    }
                    puts(convert(i, 10));
                    break;
        case 'o': i = va_arg(args, unsigned int);  //fetch octal representation
                            puts(convert(i, 8));
                            break;

        case 's': s = va_arg(args, char *);
                            puts(s);
                            break;

        case 'x': i = va_arg(args, unsigned int); //fetch hexadecimal representation;
                            puts(convert(i, 16));
                            break;

    }

    va_end(args);

}

int main() 
{ 
    myPrintf(" WWW.FIRMCODES.COM \n %d", 9); 

    return 0;
}