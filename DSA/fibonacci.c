#include <stdio.h>

int fibonacci(int i)
{
    if ( i == 0){
        return 1;
    }
        

    if ( i ==1)
    {
        return 0;
    }

    return fibonacci( i -1) + fibonacci(i -2);    
}

int main(void){
    int i ;

    for ( i =0;  i < 10; i ++)
    {
        printf("%d\n", fibonacci(i));
        
    }
    return 0;
}