#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node 
{
    int data;
    struct Node* next;
};
void push(struct Node** stack, int item);
void reverse(struct Node** stack);
bool isEmpty(struct Node* stack);
int pop(struct Node** stack);



int pop(struct Node** stack)
{
    int temp;
    struct Node* head;

    if(stack == NULL)
    {
        printf("\n stack Overflow");
        exit(1);
    }
    else{
        head = stack;
        temp = head -> data;
        stack = head -> next;
        free(head);
        return (temp);
    }

   
}


bool isEmpty(struct Node* stack)
{
    return (stack == NULL)? 1 : 0;
}



void insertAtTheBottom(struct Node** stack, int item)
{
    if(isEmpty(stack))
    {
        push(stack, item);

    }
    else{
        int temp = pop(stack);
        insertAtTheBottom(stack, temp);


        push(stack, temp);
    }
}



void reverse(struct Node** stack)
{
    if(!isEmpty(stack))
    {
        int temp = pop(stack);
        reverse(stack);


        insertAtTheBottom(stack, temp );
    }
}

void push(struct Node** stack, int item)
{
        struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

        if(new_node ==NULL)
                return NULL;
                
        new_node -> data = item;
        new_node -> next = (*stack);

        (*stack) = new_node;       

        
}

int main()
{
        struct Node* s = NULL;
        push(&s, 4);
        push(&s, 3);
        push(&s, 2);
        push(&s, 1);

        printf("\n the original stack");
        print(s);
        reverse(&s);
        printf("\n Reversed Stack");
        print(s);
        return (0);

}