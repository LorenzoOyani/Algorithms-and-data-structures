#include "main.h"

void cleanup(va_list args, buffer_t *output);
int run_printf(const char *format, va_list args, buffer_t *output);
int _printf(const char *format,...);


void cleanup(va_list args, buffer_t *output)
{
    va_end (args);
    write(1, output->start, output->len);
    free_buffer(output);
}

int run_printf(const char *format, va_list args, buffer_t *output)
{
    int i, width, prec, ret = 0;
    char temp;
    unsigned char flags, len;
    unsigned int(*f)(va_list, buffer_t *, 
                     unsigned char, int, int, unsigned char);

    for ( i =0; *(format + i); i++)
    {
        len = 0;
        if(*(format + i) == '%')
        {
            temp = 0;
            flags = handle_flags(format + i + 1, &temp);
            width = handle_width(args, format + i + temp + 1, &temp);
            prec = handle_precision(args, format + i + temp + 1, &temp);
            len = handle_length(format + i +  temp + 1, &temp);
            f  = handle_specifiers(format + i + temp + 1);

            if ( f != NULL)
            {
                i += temp + 1;
                ret  += f(args,  output, flags, width, prec, len);
                continue;
            } else if(*(format + i + temp + 1) == '\0')
            {
                ret = -1;
                break;
            }
        }

        ret += _memcpy(output, (format + i), 1);
        i  += (len !=0)? 1: 0;
    }         
    cleanup(args, output);
    return (ret);            
}


int _printf(const char *format, ...)
{
    buffer_t *output;
    va_list args;
    int rest;

    if(format == NULL)
            return (-1);

    output = init_buffer();
    if(output ==NULL)
            return (-1);
    va_start(args, format);
    rest = run_printf(format, args, output);

    return (rest);                
}