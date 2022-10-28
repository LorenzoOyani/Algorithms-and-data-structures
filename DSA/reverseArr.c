#include <stdio.h>

void reverseArray(int *arr, int start,  int end);
void printArr(int *arr, int size);



void reverseArray(int *arr, int start, int end)
{
 int tmp;
 if (start >= end)
 return;
 tmp = arr[start];
 arr[start] = arr[end];
 arr[end] = tmp;

    start ++;
    end --;

}

void printArr(int *arr, int size)
{
    int i = 0;
    for (i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
}

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n =  sizeof(arr) / sizeof(n);
    printArr(arr, n);  
    // printf("Reversed array is \n");
    reverseArray(arr, 0, n-1);
    return 0;
}