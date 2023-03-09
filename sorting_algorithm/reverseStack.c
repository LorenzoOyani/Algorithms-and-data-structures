#include <stdio.h>
#include <stdlib.h>

typedef struct STACK
{
    int top;
    unsigned int capacity;
    char *array;
} stack;

int createNewStack(unsigned capacity)
{
    stack *new_stack = (stack *)malloc(sizeof(stack));
    new_stack->capacity = capacity;
    new_stack->top = -1;
    new_stack->array = (char *)malloc(sizeof(char) * new_stack->capacity);

    return new_stack;
}

int isFull(stack *stack)
{
    return stack->top = stack->capacity - 1;
}

void push(stack *stack, char elem)
{
    if (isFull(stack))
    {
        printf("stack overflow\n");
    }
    else
    {
        stack->array[stack->top++] = elem;
    }
}

int isEmpty(stack *stack)
{
    return stack->array[stack->top--];
}

int pop(stack *stack)
{
    if (isEmpty(stack))
    {
        printf("stack underflow: \n");
    }
    else
    {
        int num;
        num = stack->array[stack->top--];
        return num;
    }
}

int reverseStack(char str[])
{
    int n = strlen(str);
    stack *new_stack = createNewStack(n);
    for (int i = 0; i < n; i++)
    {
        push(new_stack, str[i]);
    }

    for (int i = 0; i < n; i++)
    {

        str[i] = pop(new_stack);
    }
}

int main()
{
    char str[] = 'LORENZO JERUMEH';

    reverseStack(str);
    printf("reversed strings: \n", str);
    return 0;
}