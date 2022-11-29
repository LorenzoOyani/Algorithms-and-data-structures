#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
}Node;

void push(struct Node** head, int new_data)
{
    Node* new_node = malloc(sizeof(Node));
    new_node -> data = new_data;
    new_node -> next = (*head);

    (*head) = new_node;

}

int detectLoop(struct Node* head)
{
    Node* slow_p, *fast_p;
    slow_p = head;
    fast_p = head;

    while(slow_p && fast_p && fast_p -> next)
    {
        slow_p =  slow_p -> next;
        fast_p = fast_p -> next -> next;

        if(slow_p == fast_p)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    struct Node* head = NULL;
    push(&head, 20);
    push(&head, 4);
    push(&head, 15);
    push(&head, 10);

    head -> next -> next ->next ->next = head;

    if( detectLoop(head))
        printf("Loop found");
    else    
        printf("Loop not found");    
}