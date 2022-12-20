#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node * next;
}Node;

void push(Node** head, int new_data)
{
    Node* new = malloc(sizeof(Node));
    // if(!new)
    //     return (NULL);
    new -> data = new_data;
    new -> next = *head;

    (*head) = new;    
}

void deleteNode(Node** head, int new_data)
{
    Node*temp, *new_log;
    temp = *head;

    // if(temp ==NULL)
    //         return (-1);


    
    if( temp !=NULL && temp -> data == new_data)
    {
        *head = (*head) -> next;
        free(temp);
        return;
    }        

    while(temp !=NULL && temp -> data !=new_data)
            temp = temp -> next;

    if(temp ==NULL)
            return;

    new_log -> next = temp -> next;
    free(temp);        
}


void printList(Node* head)
{
    while(head !=NULL)
    {
        printf("%d ", head->data);
        head = head -> next;
    }
}


int main ()
{
    struct Node* head =NULL;

    push(&head, 7);
    push(&head, 1);
    push(&head, 3);
    push(&head, 4);

    // puts("created Linked List: ");
    printList(head);
    deleteNode(&head, 1);
    // puts("\nLinked List after deletion of 1: ");
    printList(head);
    return (0);
}