#include <stdio.h>
#include <stdlib.h>


void merge(int arr[], int left, int mid, int right )
{
    int i, j, k;

    int n1 = mid - left + 1;
    int n2 = right - mid;

    //create temporary arrays
    int L[n1], R[n2];

// copy data to temporary arrays
    for(i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for(j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

        i = 0;
        j = 0;
        k = left;

        while(i < n1 && j < n2)
        {
            if(L[i] <= R[j])
            {
                arr[k] = L[i];
                i++;
            }
            else{
                arr[k] = R[j];
                j++;
            }
            k++;
        }    

        // copy the remaining data if any..

        while(i < n1)
        {
            arr[k] = L[i];
            i++;
            k++;

        }

        while(j < n2)
        {
            arr[k] = R[j];
            j++;
            k++;
        }


}

void mergeSort(int arr[], int left, int right)
{
    if(left < right){

        int m = left + (right - left) / 2 ;

        mergeSort(arr, left, m);
        mergeSort(arr, m + 1, right);

        merge(arr, left, m, right); 
    }
            

         
}

int main()
{

    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Print giving Array\n");

    mergeSort(arr, 0, n-1);
    printf("\n sorted Array is\n");
    printf(arr, n);
    return(0);

}