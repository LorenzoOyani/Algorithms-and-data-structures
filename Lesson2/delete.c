#include <stdio.h>

int main()
{
    int LA[] = {1,2,3,4,5};

    
    int n = 5;
    int k =  3;

    int i, j;

    printf("The original array elements are :\n");

    for(i = 0; i<n; i++){
        printf("LA[%d] =%d\n", i, LA[i]);
    }

    j =k;

    while( j < n) {
        LA[j -1] = LA[j];
        j = j + 1;

    }

    n = n -1;

    printf("The array elements after deletion :\n");

    for( i =0; i < n; i++) {
        printf("LA[%d] = %d \n", i, LA[i]);
    }
}