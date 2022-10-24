#include <stdio.h>

#define MAX 5

void main() {
    int array[MAX] = {2,3,4,5};
    int N =4;
    int i =0;
    int value = 1;

    printf("printing arrray before insertion -\n");

    for (i = 0; i < N; i++) {
        printf("The array[%d] = %d \n", i, array[i]);
    }

    // shift the rest of the arrays downward...

    for( i = N; i >=0; i--) {
        array[i + 1] = array[i];
    }


    array[0] = value;

    N++;

    printf("printing array after insertion -\n");

    for(i=0; i < N; i++){
        printf("array[%d] = %d \n", i, array[i]);
    }

}