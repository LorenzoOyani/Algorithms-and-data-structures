#include <stdio.h>


void printarr(int *arr, int size);
void reverseArr(int *arr, int  start, int end);



void reverseArr(int *arr, int start, int end)
{
    int temp;
    if(start >= end)
            return;

    temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    reverseArr(arr, start + 1, end -1);

}

void printarr(int *arr, int size)
{
    int  i;
    for ( i =0; i < size; i++)
    {
        printf("The arr[%d] = %d\n", i, arr[i]);
    }
}

int main(void)
{
    int i;
    int arr [] = {9, 1, 3, 4 , 2 ,5, 6 , 7, 8};

    int  n = sizeof(arr) / sizeof (arr[0]);
    printf("The element of the array are : \n");

    for ( i = 0; i < n; i++)
    printarr(arr, n);
    reverseArr(arr, 0, n-1);
    return (0);



}