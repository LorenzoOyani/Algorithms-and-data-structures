#include <stdio.h>

int compare(int a, int b)
{
    if(a > b)
    {
        return -1;
    }
    else{
        return 1;
    }
}

void bubblesort(int *arr, int n, int(*compare)(int, int))
{
    int i, j , temp;

    for ( i =0 ; i < n; i++)
    {
        for( j = 0; j < n -1; j++)
        {
            if(compare(arr[j], arr[j+1]) > 0)
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


int main()
{
    int  i;
    int arr[] = {3 ,6 ,7 ,1 ,2 , 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubblesort(arr, n, compare);
    for (i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
}