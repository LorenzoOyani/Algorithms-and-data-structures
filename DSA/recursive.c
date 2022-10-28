#include <stdio.h>


void reverseArr(int *arr, int start, int end);
void printArr( int *arr, int size);

int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7};

    printf("The reversed array is : \n");
    int n = sizeof(arr) / sizeof(n);

    printArr(arr, n);
    reverseArr(arr, 0, n-1);
    return 0;
}

void reverseArr(int *arr, int start, int end)
{
    int temp;
    if(start >=  end)
    return;
    temp =  arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    reverseArr(arr , start + 1, end - 1);
}

void printArr(int *arr, int size)
{
    int i;
    for ( i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}