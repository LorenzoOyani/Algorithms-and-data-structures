#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node* next;
}Node;


void tailRecursion(Node* current, Node* prev, Node** head);

Node* newNode(int key)
{
    Node* new = malloc(sizeof(Node));
    new -> data = key;
    new -> next = NULL;

    return new;
}

void reverse(Node** head)
{
    if(!head)
        return;

    tailRecursion(*head, NULL, head);    
}

void tailRecursion(Node* current, Node* prev, Node** head)
{
   if(!current -> next)
   {
        *head = current;

        current -> next  = prev;

        return;
   }
   Node* next = current -> next;
   current -> next = prev;

   tailRecursion(next, current, head);
}


void printlist(Node * head)
{
    Node* temp = head;

    while (temp !=NULL)
    {
        printf("%d ", temp -> data);

        temp = temp -> next;
    }
    
}

int main()
{
    Node* head1 = newNode(1);
    head1->next = newNode(2);
    head1->next->next = newNode(3);
    head1->next->next->next = newNode(4);
    head1->next->next->next->next = newNode(5);
    head1->next->next->next->next->next = newNode(6);
    head1->next->next->next->next->next->next = newNode(7);
    head1->next->next->next->next->next->next->next
        = newNode(8);
    printf("Given linked list\n");
    printlist(head1);
    reverse(&head1);
    printf("Reversed linked list\n");
    printlist(head1);
    return 0;
}