#include <stdio.h>

#define MAXSIZE 100
#define NIL -1

int lookup[MAXSIZE];

/**
 * Top down fibonnaci computation using memoization
 *  create an empty array or a define size;
 * initialize the array and check if the values are not computed
 * then return the base case of the fib sequence in the array
 *
 */

void _initialize()
{
    int i;
    for (i = 0; i <= MAXSIZE; i++)
    {
        lookup[i] = NIL;
    }
}

int fib(int n)
{
    if (lookup[n] == NIL)
    {
        if (n <= 1)
        {
            lookup[n] = n;
        }
        else
        {
            return lookup[n] = fib(n - 1) + fib(n - 2);
        }
    }
    return lookup[n];
}

int main()
{
    int n = 40;
    _initialize();
    printf("Fibonacci number is:  %d\n ", fib(n));
    return 0;
}