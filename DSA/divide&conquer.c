#include <stdio.h>
#include <stdlib.h>


int DAC_max(int arr[],int index, int l);
int DAC_min(int arr[], int index, int l);


int DAC_max(int arr[], int index, int l)
{
    int max;
    if ( l -1 ==0)
    {
        return arr[index];
    }
    if(index >= l -2)
        if(arr[index] > arr[index + 1])
            return arr[index];
    else
            return arr[index + 1];

    max = DAC_max(arr, index + 1, l); 

    if (arr[index > max])
        return arr[index];
    else
        return max;

}

int DAC_min(int arr[], int index, int l)
{
    int min;
    if(l -1 == 0)
    {
        return arr[index];

    }

    if( index >= l -2)
    {
        if(arr[index] < arr[index + 1])
            return arr[index];
    }
    else    
            return arr[index + 1];


    min = DAC_min(arr, index + 1, l);

    if (arr[index] < min)
            return arr[index];
    else
            return min;                
}


int main()
{
    int min, max, N;

    int arr[7] = {70, 250, 50, 80, 140, 12, 14};

    max = DAC_max(arr, 0 ,7);
    min = DAC_min(arr, 0, 7);
    

    printf("The minimum number in a given array is : %d\n", min);
    printf("The maximum number in a given array is : %d\n", max);
    return 0;
}