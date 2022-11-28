#include <stdio.h>
#include <stdlib.h>

/*insert a new node in the linked List*/

struct Node{
    int data;
    struct Node *next;
};



void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node =(struct Node*) malloc(sizeof(struct Node));

    new_node -> data =new_data;
    new_node -> next = (*head_ref);
    (*head_ref) = new_node;
}

/*Adding a node after a given previous node*/

void insertAfter(struct Node * previous_node, int new_data)
{
    if(previous_node ==NULL)
    {
        printf("The given previous node cannot be null");
        return;
    }

    struct Node * new_node = (struct Node*)malloc(sizeof(struct Node));

    new_node  -> data = new_data;
    new_node -> next = previous_node -> next;

    previous_node -> next = new_node;
}

/*Adding a node to the end of the list*/

void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));

    struct Node* last = (*head_ref);

    new_node ->data = new_data;

    new_node -> next = NULL;

    if(*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }

    while(last !=NULL)
    {
        last = last -> next;

    }
    
        last ->next = new_node;
        return;
}
