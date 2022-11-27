#include <stdio.h>


void moveZeros(int *array, int size)
{
    int count = {0},  i;

    for ( i =0; i < size; i++)
    {
        if(array[size] !=0)
        {
            array[count++] = array[size];
        }
       
    }

    while(count < size)
        array[count++] = 0;

}


int main(void)
{
    int i =0;
    int array [] = {2 , 3, 8, 0, 0, 5 ,0,  0, 0};
    int n = sizeof(array) / sizeof(array[0]);
    printf("The Array of elemen after moving is: \n");
    moveZeros(array, n);
    for ( i = 0; i < n; i++)
    {
        printf("%d\n", array[i]);
    }
}