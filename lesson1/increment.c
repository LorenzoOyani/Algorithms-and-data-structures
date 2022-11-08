#include <stdio.h>
#define SIZE 5


int main(void)
{
    int arr[SIZE] = { 10, 20 ,30, 40, 50};

    int *ptr;
    int i, count = 0;

    ptr = &arr[0];
    
        while ( count < SIZE)
        {
            printf("arr[%d] = %d\n", count, *ptr);

            ptr ++;
            count ++;
            
        }
        return (0);
    


}