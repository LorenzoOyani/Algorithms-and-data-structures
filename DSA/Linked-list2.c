#include <stdio.h>
#include <stdlib.h>


/**
 * Create a Linked list of..
 * insertion
 * deletion
 * insertion at the end.
 * 
*/

struct Node{
    int data;
    struct Node* next;
};

void push(struct Node** head, int new_data)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    new_node -> data = new_data;
    new_node -> next = (*head);

    (*head) = new_node;
}


void insertAfter(struct Node* previous_node, int new_data)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    if(previous_node ==NULL)
    {
        printf("Cannot return the value of Null for new_node: ");
        return;
    }
    new_node ->data = new_data;
    new_node -> next = previous_node -> next;

    previous_node ->next = new_node;
}


void append(struct Node** head, int new_data)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    struct Node* last = *head;

    new_node ->data = new_data;
    new_node -> next = NULL;

    if(*head ==NULL)
    {
        
        *head = new_node;
        return;
    }

    while (last -> next != NULL)
    {
        last = last -> next;


        
    }

    last ->next = new_node;
    return;
    
}

int main()
{
    struct Node* head =NULL;

    append(&head, 6);

    push(&head, 7);

    push(&head, 1);

    append(&head, 4);

    insertAfter(head ->next, 8);

    printf("\n created Linked List is: ");
    printList(head);
    return (0);
}