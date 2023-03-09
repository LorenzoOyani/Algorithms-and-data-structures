#include <stdio.h>

void swapPositions(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void sortSelection(int arr[], int size)
{
    int i, j;
    int min_index;

    for (i = 0; i < size - 1; i++)
    {
        min_index = i;

        for (j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
            if (min_index != i)
            {
                swapPositions(&arr[min_index], &arr[i]);
            }
        }
    }
}

void printArr(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
}

int main()
{
    int arr[] = {64, 25, 4, 2, 54, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("The size of the array before sorting\n:  ");
    sortSelection(arr, n);
    printf("The size of the array after selection is\n:  ");
    printArr(arr, n);
}