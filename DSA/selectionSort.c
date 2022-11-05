#include <stdio.h>


void swap( int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectedSort(int arr[], int n)
{
    int i, j;
    int min_index;
    
    for(i = 0; i < n -1; i++)
    {
        min_index = i;
        for( j  = i + 1; j < n; j++)
        {
            if( arr[j] < arr[min_index])
                min_index = j;
            
                if(min_index != i)
                    swap(&arr[min_index], &arr[i]);
            
        }
        
    }
}


void printArr(int arr[], int size)
{
    int i;
    for(i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
}

int main(void)
{
    int arr [] = {64,24, 25, 11 , 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("The value of the selected sorted array is: \n");
     selectedSort(arr,  n);
     printf("seorted array: \n");
     printArray(arr, n);
     return 0;
}