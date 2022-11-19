#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int maximum_sum_subarray(int* arr, int n)
{
    int ans = INT_MIN;
    int sub_array_size, start_index;
    for(sub_array_size = 1; sub_array_size <=n; ++sub_array_size)
    {
        for(start_index = 0; start_index < n; start_index ++)
        {
            if(start_index+ sub_array_size > n)
                break;
            int sum = 0;
            for(int i = start_index;  i < (start_index + sub_array_size); i++)
            {
                sum +=arr[i];
                ans = max(ans, sum);
            }    
        }
    }
    return ans;
}

int main()
{
    int  i ;
    int arr [] = { 3, -2 , 5 , -1};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("The sum of the sub array: \n");
   int  maximum_sum_subarray(int arr[], int n);
    for ( i = 0 ; i < n; i++)
    {
        printf("    The sub arr[%d] = %d is:\n");
    }
    return (0);

}