#include <stdio.h>
/**
 * Tabulation method of solving a dynamic programming question
 * this deals with the bottom up path of programming;
 * the values are stored and re-use
 *
 */

int fib(int n)
{
    int f[n + 1];
    f[0];
    f[1];

    for (int i = 2; i <= n; i++)
    {
        return f[i] = fib(n - 1) + fib(n - 2);
    }
    return f[n];
}

int main()
{
    int n = 9;
    printf("The fibonacci sequence is: %d\n", fib(n));
}