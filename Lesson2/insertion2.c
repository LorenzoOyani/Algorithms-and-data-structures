#include <stdio.h>

#define MAX 5

int main() {
    int array[MAX] = {1,2,3,4};
   int N= 4;
    int i = 0;
    int index =2;
    int value =9;

    printf("print array before insertion -\n");

    for( i =0; i<N; i++ ) {
        printf("array[%d] = %d \n", i, array[i]);

    } 
    //shift the rest of the array downward;

    for ( i = N; i >= index ; i--) {
        array[ i + 1] = array[i];
    }
    array[index] = value;

        N++;
    printf("print array after insertion -\n");

    for(i = 0 ; i < N; i++) {
        printf("array[%d] = %d \n", i, array[i]);
    }
}