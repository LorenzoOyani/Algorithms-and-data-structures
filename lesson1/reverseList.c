#include <stdio.h>
#include <stdlib.h>
typedef struct Node 
{
    int data;
    struct Node* next;
}Node;

void push( struct Node**head, int new_data)
{
    Node* new = malloc(sizeof(Node));

    new -> data = new_data;
    new -> next = *head;

    (*head) = new;
}

static void reverse(struct Node**head)
{
    Node* next, *current;
    next =NULL;
    Node* prev = NULL;
    current = *head;

    while(current !=NULL)
    {
        next = current -> next;
        current -> next = prev;

        prev = current;
        current = next;
    }

    *head = prev;
}

void printList(Node* head)
{
    Node* temp = head;
    while( temp != NULL)
    {
        printf("%d ", temp -> data);
        temp = temp -> next;
    }
}


int main()
{
    /* Start with the empty list */
    struct Node* head = NULL;
 
    push(&head, 20);
    push(&head, 4);
    push(&head, 15);
    push(&head, 85);
 
    printf("Given linked list\n");
    printList(head);
    reverse(&head);
    printf("\nReversed linked list \n");
    printList(head);
    getchar();
}