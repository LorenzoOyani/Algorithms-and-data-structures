#include <stdio.h>

#define MAX 5

int main(void)
{
    int array[]  = {1,2,3,4,5};
    int i, k =3, n =5;
    int j;
    int value = 14;

    j = n;

    printf("value of array before insertion is:\n");

    for (i = 0; i< n; i++)
    {
        printf("array[%d] = %d \n",i, array[i]);

    }

    n = n + 1;

    while( j >= k)
    {
        array[j + 1] = array[j];
        j = j -1;
    }

    array[k] = value;

    printf("The value of the new inserted arrays: \n" );

    for ( i =0; i < n; i++)
    {
        printf("array[%d] = %d \n", i, array[i]);
    }
}