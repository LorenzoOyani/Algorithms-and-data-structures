#include  <stdio.h>
#include <stdlib.h>


/**
 * write a function that swap a node in a linked list
 * The problem has the following cases to be handled: 
 * a and  b  may be a head node.
 * Either a or b may be the last node.
 * a and / or b may not be present in the Linked List.
*/

typedef struct Node{
    int data;
    struct Node* next;
} Node;


void push(Node** start, int new_data)
{
    Node *new  = (Node*)malloc(sizeof(Node));
    // if(new ==NULL)
    //         return NULL;

    new -> data = new_data;
    new -> next = *start;

    *start = new;        
}   

void swapNodes(Node **head, int x, int y)
{
    Node* currentX = *head;
    Node* currentY = *head;
    Node* prevX = NULL;
    Node* prevY = NULL;

    if(x == y)
            return;

    while(currentX && currentX -> data !=x)
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

    if( prevY !=NULL)
    {
        prevY -> next = currentX;
    }else{
        *head = currentX;
    }

    struct Node* temp = currentY -> next;
    currentY -> next = currentX -> next;
    currentX -> next = temp;

}

void printList(Node* head)
{
    
    while(head !=NULL)
    {
        printf("%d ", head -> data);
        head = head -> next;
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