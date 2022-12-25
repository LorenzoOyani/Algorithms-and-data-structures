#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool compare(const void *a, const void *b)
{
    return (*(int*) a == *(int*)b);
}

int search(int arr[], int arr_size, int elem_size, void *x, 
            bool compare(const void *a, const void *b))
{
    char *ptr = (char*) arr;

    int  i;

    for(i = 0; i < arr_size; i++)
    {
        if(compare(ptr + i*elem_size, x))
            return i; 
    } 

    return (-1);
}            

int main()
{
    int arr[] = {3, 4 ,5, 6, 7, 8, 9, 2};
    int  n = sizeof(arr) / sizeof(arr[0]);

    int x = 7;
    printf("The returned array is: %d\n", search(arr, n, sizeof(int), &x, compare));
    return (0);

}