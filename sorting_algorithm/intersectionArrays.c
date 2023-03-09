#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 102

typedef struct Node
{
    int array_capacity[MAX_SIZE];
    int top;

} Stack;

Stack s;

int binarySearch(int arrY[], int m, int target)
{
    int low = 0;
    int high = m;

    while (low < high)
    {
        int mid = low + (low - high) / 2;
        if (arrY[mid] == target)
        {
            return mid;
        }
        if (arrY[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            high = mid + 1;
        }
    }
    return -1;
}

void swap(int *y, int *x)
{
    int temp;
    temp = *y;
    *y = *x;
    *x = *y;
}

int bubbleSort(int arrY[], int m)
{
    int i, j;
    for (i = 0; i < m - 1; i++)
    {
        for (j = 0; j < m - 1 - i; j++)
        {
            if (arrY[j] < arrY[j + 1])
            {
                swap(&arrY[j], &arrY[j + 1]);
            }
        }
    }
}

int push(int c)
{
    if (c == 1)
    {
        return;
    }
    int num = s.top;
    s.array_capacity[num++] = c;
}

void intersectionArr(int arrX[], int arrY[], int n, int m)
{
    int sort = bubbleSort(arrY, m);
    int i, j;
    int k;

    for (i = 0; i < m; i++)
    {
        if (binarySearch(arrY, n, arrX[i]) != -1)
        {
            push(arrX[i]);
        }
    }
    for (k = 0; k < arrX[i]; k++)
    {
        printf("%d\n", arrX[i]);
    }
}

int main()
{
    int arrX[] = {3, 2, 5, 6, 7, 8};
    int arrY[] = {3, 4, 2, 5, 8, 9};

    int n = sizeof(arrX) / sizeof(arrX[0]);
    int m = sizeof(arrY) / sizeof(arrY[0]);
    printf("The intersected arrays is: \n");
    intersectionArr(arrX, arrY, n, m);

    return 0;
}