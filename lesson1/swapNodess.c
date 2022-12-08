#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
} Node;


void push(Node **head, int new_data)
{
    Node *new = malloc(sizeof(Node));
    new -> data = new_data;
    new -> next = *head;

    *head = new;
}

void swapNodes(Node **head, int x, int y)
{
    Node* currentX = *head;
    Node* currentY = *head;
    Node* prevX =NULL;
    Node* prevY =NULL;


    if(x == y)
            return;
   

    while(currentX && currentX ->data !=x)
    {
        prevX = currentX;
        currentX = currentX -> next;
    }

    while(currentY && currentY -> data !=y)
    {
        prevY = currentY;
        currentY = currentY -> next;
    }            

    if(currentX ==NULL || currentY ==NULL)
                return;

    if(prevX !=NULL)
    {
        prevX -> next = currentY;
        
    }else{
        *head = currentY;
    }

    if(prevY !=NULL)
    {
        prevY -> next = currentX;
        
    }else{
        *head = currentX;
    }

    Node *temp = currentY -> next;
    currentY -> next = currentX -> next;
    currentX -> next = temp;
}

void printList(Node *head)
{
    Node * current = head;
    while(current !=NULL)
    {
        printf("%d\n", current -> data);
        current = current -> next;
    }
}




int main()
{
    struct Node* start = NULL;

    push(&start, 7);
    push(&start, 6);
    push(&start, 5);
    push(&start, 4);
    push(&start, 3);
    push(&start, 2);
    push(&start, 1);

    printf("Linked list before calling swapNodes()");
    printList(start);
    printf("\n");

    swapNodes(&start, 6, 1);

    printf("Linked list after calling swapNodes() ");
    printList(start);
}