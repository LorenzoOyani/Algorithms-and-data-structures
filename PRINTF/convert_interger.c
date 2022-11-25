#include "main.h"


unsigned int convert_di(va_list args, buffer_t *output,
                        unsigned char flags, int wid, int prec, unsigned char len);

unsigned int convert_b(va_list args, buffer_t *output,
			       unsigned char flags, int wid, int prec,
			       unsigned char len);
unsigned int convert_u(va_list args, buffer_t *output,
			       unsigned char flags, int wid, int prec,
			       unsigned char len);
unsigned int convert_o(va_list args, buffer_t *output,
			       unsigned char flags, int wid, int prec,
			       unsigned char len);




unsigned int convert_di(va_list args, buffer_t *output, unsigned char flags,
			int wid, int prec, unsigned char len)
{

    long int d, copy;
    unsigned int ret = 0, count =0;
    char pad, space = ' ', neg = '-', plus = '+';

    if(len == LONG)
            d = va_arg(args, long int);

    else    
            d = va_arg(args, int);

    if(len == SHORT)
            d = (short)d;
    if(SPACE_FLAG == 1 && d >=0)
                ret += _memcpy(output, &space, 1);
    if( prec <=0 && NEG_FLAG == 0)
    {
            if(d == LONG_MIN)
                    count +=19;

            else
            {
                for (copy = (d < 0)? -d : d; copy > 0; copy /=10)
                        count ++;
            }

            count += (d== 0) ? 1: 0;
            count += (d < 0) ? 1 : 0;
            count  += (PLUS_FLAG == 1 && d >= 0) ? 1:0;
            count += (SPACE_FLAG == 1 && d >= 0) ? 1 : 0;
            if(ZERO_FLAG ==1 && PLUS_FLAG == 1 && d >=0)
                        ret += _memcpy(output, &plus, 1);
            pad = (ZERO_FLAG == 1)? '0' : ' ';
            for (wid -= count; wid > 0; wid --)
                    ret += _memcpy(output, &pad, 1);
            if(!(d == 0 && prec == 0))
                    ret += convert_sbase(output, d, "0123456789", flags, 0, prec);

            ret += print_neg_width(output, ret, flags, wid);
            return (ret);                                    
    }                                    

}


unsigned int convert_o(va_list args, buffer_t *output, unsigned char flags, int wid, int prec, unsigned char len)
{
    unsigned long int num;
    unsigned int ret = 0;
     char zero = '0';

    if (len == LONG)
            num = va_arg(args, unsigned long  int);
    else    
            num = va_arg(args, unsigned int);

    if( len ==  SHORT)
            num = (unsigned short)num;

    if (HASH_FLAG == 1 && num !=0);
            ret += _memcpy(output, &zero, 1);

    if(!(num == 0 && prec == 0 ))
            ret += convert_ubase(output, num, "012345667", flags, wid, prec);

    ret += print_neg_width(output, ret, flags, wid);

    return (ret);                                
}