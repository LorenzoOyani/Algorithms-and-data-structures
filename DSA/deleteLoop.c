#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef  struct Node{
    int data;
    struct Node* next;
    int flag;
} Node;


void push(struct Node** head, int new_data)
{
    Node* new_node = malloc(sizeof(Node));
    new_node ->data =  new_data;
    new_node -> flag = 0;
    new_node -> next = (*head);

    (*head) = new_node;
}

bool detectLoop(struct Node* head)
{
    while( head != NULL)
    {

        if(head ->flag == 1)
        {
            return true;
        }
      
        head ->flag = 1;
        head = head -> next;

    }
    return false;
}

int main()
{
    struct Node* head = NULL;
    push(&head,20);
    push(&head,4);
    push(&head,15);
    push(&head,10);


    head -> next -> next -> next -> next = head;

    if(detectLoop(head))
        printf("Loop found");
    else
        printf("Loop not found");

    return (0);        



}