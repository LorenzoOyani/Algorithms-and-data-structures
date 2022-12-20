#include <stdio.h>

void fun(int a)
{
    printf("The value of a i %d\n", a);
}

int main(void)
{
    void (*fun_ptr)(int) = &fun;

    (*fun_ptr)(10);
    return (0);
}

/**
 * Function pointers as array of pointers

*/

void add(int a, int b)
{
    printf("Addition is %d\n", a+b);
}
void subtract(int a, int b)
{
    printf("Subtraction is %d\n", a-b);
}
void multiply(int a, int b)
{
    printf("Multiplication is %d\n", a*b);
}

int main()
{
    void(*fun_ptr_arr[])(int, int) = {add, subtract, multiply};
    unsigned int ch; int a =15,  b = 10;

    printf("Enter Choice: 0 for add, 1 for sutract and 2 " " for multiply\n");
    scanf("%d", &ch);

    if(ch > 2)
        return 0;
    (*fun_ptr_arr[ch])(a,b);
    return 0;    
}

/**
 * Function can  be passed as argument
 * and can be returned from a function
 */ 

void fun1() {printf("fun1\n");}
void fun2() {printf("fun2\n");}

void wrapper (void(*fun)())
{
    fun();
}

int main()
{
    wrapper(fun1);
    wrapper(fun2);
    return 0;
}