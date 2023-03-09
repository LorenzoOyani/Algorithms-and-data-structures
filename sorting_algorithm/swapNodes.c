#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;

} Node;

void push(Node** head, int data)
{
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node -> data = data;
    new_node -> next = (*head);

    (*head) = new_node;

}


void swapNodes(Node** head, int x, int y)
{
    Node* currentX = (*head);
    Node* currentY = (*head);
    Node* prevX =NULL;
    Node* prevY = NULL;

    if (x == y)
            return;
    
    while (currentX && currentX ->data != x)
    {
        prevX  = currentX;
        currentX = currentX -> next;
    }

    while (currentY && currentY !=y)
    {
        prevY = currentY;
        currentY = currentY -> next;
    }

    if (currentX !=NULL || currentY!=NULL)
                return;

    if (prevX !=NULL)
    {
        prevX = currentY;
    } else{
        (*head) = currentY;
    }

    if (prevY !=NULL)
    {
        prevY = currentX;
    }else{
        (*head) = currentX;
    }
    Node* temp = currentX -> next;
    currentX -> next = currentY -> next;
    currentY ->next = currentX ->next;

}

int main()
{
    struct Node *head = NULL;

    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 5);
    push(&head, 2);

    printf("The list of nodes are :\n");
    printList(head);

    printf("The swaped Nodes in the list are: \n");
    swapNodes(&head, 4, 1);
    printList(head);
    return 0;
}