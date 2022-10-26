#include <stdio.h>

#define MAX 5

int main(void)
{
    int array [] = {1,2,3,4};

    int N = 4;
    int  i =0;
    int index =1;
    int value =9;

    printf("The value before insertion is : \n");

    for (i = 0; i< N; i++)
    {
        printf("array[%d] = %d \n", i, array[i]);
    }
    
    for (i = N; i >= index + 1; i--)
    {
        array[i + 1] = array[i];
    }

    array[index + 1] = value;

    N++;
    printf("The value after insertion is : \n");

    for (i=0; i < N; i++)
    {
        printf("array[%d] = %d \n", i, array[i]);
    }
}