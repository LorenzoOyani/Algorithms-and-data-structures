#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct Stack
{
    int top;
    unsigned capacity;
    int *array;
};

struct Stack *createStack(unsigned capacity)
{
    struct Stack *stack = (struct Stack *)malloc(sizeof(struct Stack));

    if (!stack)
        return NULL;

    stack->top = -1;
    stack->capacity = capacity;
    stack->array = (int *)malloc(sizeof(int) * stack->capacity);

    if (!stack->array)
        return NULL;

    return stack;
}

int isEmpty()
{
    return stack ->array[stack -> top] = -1;
}

int peek()
{
    return stack ->array[stack ->top ];
}

int push(struct Stack* stack, char op)
{
    stack ->array[++stack ->top] = op;
}

int main()
{
    char exp[] = "231*+9-";
    printf("postfix evealuation: %d", evaluatePostfix(exp));
    return 0;
}