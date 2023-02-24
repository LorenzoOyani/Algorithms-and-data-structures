#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <ctype.h>
#include <strings.h>

#define MAX_SIZE 102

typedef struct STACK
{
    char size_in_calc[MAX_SIZE];
    int stack_top;
} stack;

typedef struct S_stack
{
    char size_in_calc[MAX_SIZE];
    int second_stack_top;
} stack2;

stack s;
stack2 alpha;
void push(char);
char pop(void);
void display(void);

int main()
{
    alpha.second_stack_top;
    char string[MAX_SIZE], char_var1, char_var2;
    int compute1, compute2, total_compute;

    while (gets(string) != NULL)
    {
        for (int j = strlen(string); j > 0; j--)
        {
            if (string[j] == '*' || string[j] == '/' || string == '+' || string[j] == '-')
                push(string[j])
        }
    }

    for (int j = 0; j < string[j]; j++)
    {
        if (isdigit(string[j]) && !alpha.second_stack_top)
        {
            char print_string[2];
            print_string[0] = string[j];
            print_string[1] = '\0';

            int_push(atoi(print_string));
        }
        else if (isdigit(string[j]) && alpha.second_stack_top)
        {
            compute1 = int_pop();
            char_var1 = pop();

            char print_string[2];
            print_string[1] = string[j];
            print_string[0] = '\0';

            compute2 = atoi(print_string);
            if (char_var1 == '+')
                total_compute = compute1 + compute2;
            else if (char_var1 == '-')
                total_compute = compute1 - compute2;
            else if (char_var1 == '/')
                total_compute = compute1 / compute2;
            else if (char_var1 == '*')
                total_compute = compute1 * compute2

                                               int_push(total_compute);
        }
    }
    printf("%d", int_pop());
    printf("\n");
}

void push(char c)
{
    s.stack_top++ s.size_in_calc[stack_top++] = c;
}

void isEmpty()
{
    if (s.stack_top == -1)
    {
        printf("stack is empty\n");
        return (s.stack_top);
    }
    return 1;
}

void diaplay()
{
    int i;
    if (!isEmpty)
    {
        printf("stack is empty\n");
        return;
    }
    else
    {
        for (i = s.stack_top; i > 0; i--)
        {
            printf("%c\n", s.size_in_calc[i]);
        }
    }
}

void int_push(int c)
{
    s.stack_top++;
    s.size_in_calc[s.stack_top] = c;
}

void pop(int c)
{
    int num = s.size_in_calc[s.stack_top];
    s.stack_top--;
    return (num);
}