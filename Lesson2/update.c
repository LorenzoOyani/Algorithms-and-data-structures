#include <stdio.h>

void main()
{
    int arr[] = { 1, 3 ,4 ,5, 6, 7};
    int  k =3, n = 6, item = 17;

    int  i, j ;

    printf("The original array elements is: \n");

    for ( i = 0; i < n;  i++)
    {
        printf("The arr[%d] is = %d\n", i, arr[i]);
    }

    arr[k-1] = item;
    printf("The array of the element after updatinf is: \n");

    for ( i =0; i < n; i++)
    {
        printf("The arr[%d] = %d\n", i, arr[i]);
    }
}