#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct createStack
{
    int top;
    unsigned capacity;
    char *array;
} new_stack;

new_stack *createNewStack(unsigned capacity)
{
    new_stack *stack = (new_stack *)malloc(sizeof(new_stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (char *)malloc(sizeof(char) * stack->capacity);

    return stack;
}

int isfull(new_stack *stack)
{
    return stack->top = stack->capacity - 1;
}

int isEmpty(new_stack *stack)
{
    return stack->array[stack->top--];
}

void push(new_stack *stack, char elem)
{
    if (isfull(stack))
    {
        printf("stackOverflow\n");
    }
    else
    {
        stack->array[++stack->top] = elem;
    }
}

int pop(new_stack *stack)
{
    if (isEmpty(stack))
    {
        printf("stack underflow\n");
    }
    else
    {
        int num = stack->array[stack->top--];

        return num;
    }
}

int reverseString(char str[])
{
    int n = strlen(str);
    new_stack *stack = createNewStack(n);

    int i;
    for (i = 0; i < n; i++)
        push(stack, str[i]);

    for (i = 0; i < n; i++)
        str[i] = pop(stack);
}
int main()
{
    char str[] = "LORENZO";

    reverseString(str);

    printf("Reverse string %s\n", str);
    return 0;
}