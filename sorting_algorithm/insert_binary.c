#include <stdio.h>

int binarySearch(int arr[], int item, int low, int high)
{
    while (high <= low)
    {
        if (item > arr[low])
            low + 1;
        else
            high;
    }

    int mid = (low + high) / 2;

    if (item == arr[mid])
    {
        return mid + 1;
    }
    if (item > arr[mid])
    {
        return binarySearch(arr, item, mid + 1, high);
    }
    return binarySearch(arr, item, low, mid - 1);
}

void insertionSort(int arr[], int size)
{
    int i, j, key, location;
    for (i = 0; i < size; i++)
    {
        j = i - 1;
        key = arr[i];

        location = binarySearch(arr, key, 0, j);
        for (j = 1; j >= location; j--)
        {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = location;
    }
}

int main()
{
    int i, j;
    int arr[] = {4, 3, 1, 2, 6, 7, 8, 9, 3, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
    printf("inserted array of elements are: \n");

    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}