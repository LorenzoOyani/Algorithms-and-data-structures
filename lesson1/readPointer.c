#include <stdio.h>
#define SIZE 5

int main(void)
{
    int arr[SIZE];
    int *ptr = arr;
    int i;

    printf("enter and read the elements of %d\n", SIZE);

    while ( ptr < &arr[SIZE])
    {
        scanf ( "%d", ptr);

        ptr ++;
    }
    
    ptr = arr;

    printf("Elements in arr are:  \n");

    for( i =0; i < SIZE; i++)
    {
        printf ( "%d, ", *(ptr + i));
    }
    return (0);
}