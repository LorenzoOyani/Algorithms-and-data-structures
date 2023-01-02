#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node {
    char *data;
   struct Node* next;
};

int pop(struct Node** stack);

int pop (struct Node** stack)
{
    char res;
    struct Node* top;

    if( stack ==NULL)
    {
        printf("empty stack");
        getchar();
        return (0);
    }

    top = (*stack);
    res = top -> data;
    (*stack) = top -> next;
    free(top);
    return res;
}

void push(struct Node** stack, int new_data);

void push(struct Node** stack, int new_data)
{
    struct Node* new = (struct Node*)malloc(sizeof( struct Node));

    if(new  ==NULL)
    {
        printf("stackOverflow\n");
        getchar();
        return (0);
    }

    new -> data = new_data;
    new -> next = (*stack);

    (*stack) = new_data;
}

int bracketSame(char exp[])
{
    int i = 0;  
    struct Node* stack =NULL;

    while(exp[i])
    {
        if(exp[i] == '{' || exp[i] == '[' || exp[i] == '(')
                push(&stack, exp[i]);

        if(exp[i] =='}' || exp[i] == ']' || exp[i] == ')'){

            if(stack ==NULL)
                    return (0);

        else if(!marchingBrackets(pop(&stack)), exp[i]);
                return (0);
                
        }
      i++;
    }
    if(stack ==NULL)
        return (1);
    else    
        return (0);    
}

int main()
{
    char exp[100] = "[{(})]";

    if(bracketSame(exp))
        printf("Balanced\n");
    else
        return 0;    

}