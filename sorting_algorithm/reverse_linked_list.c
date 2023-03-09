#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node* next;
}Node;

void push(Node** head, int data)
{
    Node* new  =(Node*)malloc(sizeof(Node));
    new ->data = data;
    new -> next = (*head);

    (*head) = new;
}

void reverseLinkedList(Node** head)
{
    Node* next = NULL;
    Node* current;
    Node* prev = NULL;

    current = (*head);

    while(current !=NULL)
    {
         next = current -> next;
         current -> next = prev;
         prev = current;

    }
        (*head) = prev;

}

int main () {
    struct Node* head = NULL;

    push(&head, 12);
    push(&head, 2);
    push(&head, 4);
    push(&head, 6);

    printf("The giving linked list is: \n");
    printList(head);
    printf("The reversed linked list is: \n");
    reverseLinkedList(&head);
    printList(head);
    getchar();
}