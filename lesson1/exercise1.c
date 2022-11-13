#include <stdio.h>
#include <ctype.h>

/*
K&R Exercise 4-2. Extend atof to handle scientific 
notation of the form 123.45e-6 where a floating-point number may be followed by e or E and an optionally signed exponent.
*/
#define MAXLINE 1000 /*mAXIMUM INPUT LINE LENGTH*/

double atof(char s[]);
double mypow(double base, int power);
int mygetline(char line [], int max);
int myabs(int x);

int main(){
    char line[MAXLINE];
    
    while(mygetline(line, MAXLINE) > 0)
        printf("%s => %f\n", line, atof(line));
}

int mygetline(char s[], int lim ) {

    int c, i;
    
    i = 0;

    while (--lim > 0 && (c =getchar()) !=EOF && c != '\n')
        s[i++] = c;

/* dont store newline character*/
        if ( c = '\n')
            s[i++] = '\0';

            return i;
}

/*myabs: absolute value of x 
aux function added to original solution
*/

int myabs( int x) {
    if ( x <= 0)
        x *= -1;

        return x;
}

/* mypow: compute power
aux function added to original solution
*/

double mypow(double base, int power) {
    double rv;
    int i;

    rv =1.0;

    for ( i =0; i < myabs(power); i++)
        rv *=10;

        if( power < 0) {
            rv  = 1 / rv;
        }

        return rv;
}

/*atof: conveerting str to double*/
double atof(char s[]) {
    double val, power, exponent;

    int i, sign, esign;

    for ( i = 0; isspace(s[i]); i++)
        ;

    sign = (s[i] == '-') ? -1 : 1;

    if ( s[i] == '-' || s[i] == '+')
        i++;

    for (val = 0.0; isdigit(s[i]); i++)
        val = 10 * val + (s[i] - '0');

    for (power = 1.0; isdigit(s[i]); i++) {
        val = val * 10.0 + (s[i] - '0');
        power *= 10.0;
    }        

    /* support for scientific notation*/

    if ( s[i] == 'e' || s[i] == 'E')
        i++;

    esign = (s[i] == '-') ? -1 : 1;

    if (s[i] == '-' || s[i] == '+')
        i++;

    for (exponent = 0.0; isdigit(s[i]); i++) 
        exponent = 10 * exponent + (s[i] - '0');

    exponent = esign * exponent;

    printf(" exponent: %f\n", exponent);

    return sign * (val / power) * mypow(10, exponent);           

}