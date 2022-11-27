#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(void)
{
    int *ptr;
    int i,j;

    int arr[SIZE];

    printf(" The arrays of pointers available is: \n");
    
    while(ptr < &arr[SIZE])
    {
        scanf("%d", ptr);
        ptr++;
    }
    ptr = arr;


for ( i =0; i < SIZE; i++)
{
    printf(" %d\n, ", *(ptr + i));
}
    return (0);
}