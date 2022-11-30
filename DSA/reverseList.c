#include <stdio.h>
#include <stdlib.h>


typedef struct Node{
    int data;
    struct Node* next;
}Node;


static void reverse(Node**head)
{
    Node* current, *prev, *next;

    current = (*head);
    prev = NULL;
    next =NULL;
    while(current !=NULL){
        next = current -> next;

        current -> next = prev;
        prev = current;
    }
    (*head) = prev;
       

}

void push(Node** head, int new_data )
{
    Node* new = malloc(sizeof(Node));
    

    new -> data = new_data;
    new -> next  = (*head);

    (*head) = new;


}
void printList(Node* head)
{
    Node*temp;

    temp = head;
    while(temp !=NULL)
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