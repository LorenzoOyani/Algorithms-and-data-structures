#include <stdio.h>
#include <stdlib.h>

/**the task is to reverse the linked list
 * Given a pointer to the head node of a linked list
 * 
 * we need to reverse the list by changing the links
 * between nodes.
 * 
*/

/**
 * Example:
 * input: Head of the following linked list
 * 
 * 1 -> 2 -> 3-> 4 -> NULL
 * output : Linked list should be chnaged to
 * 
 * 4 -> 3 -> 2 -> 1 -> NULL
*/

typedef struct Node
    {
        int data;
        struct Node* next;
    }Node;

void reverseUtils(Node* curr, Node* prev, Node** head);

    void reverseList(Node** head)
    {
        if(!head)
            return;
        reverseUtils(*head, NULL, head);    
    }


void reverseUtils(Node* curr, Node* prev, Node** head)
{
    
    if(!curr -> next)
    {
        *head = curr;
        curr -> next = prev;
        return;
    }
    Node* next = curr -> next;
    curr -> next = prev;

    reverseUtils(next, curr, head);

}

Node *newNode(int key)
{
    Node* temp = (Node*)malloc(sizeof(Node));
    temp ->data = key;
    temp -> next = NULL;
    return temp;
}

void printList(Node* head)
{
    if( head !=NULL){
        printf("%d", head -> data);
        head = head -> next;
    }
    printf("\n");
}

int main()
{
    Node* head1 = newNode(1);
    head1 -> next = newNode(2);
    head1 ->next ->next = newNode(3);
    head1-> next -> next -> next = newNode(4);
    head1 -> next -> next -> next ->next = newNode(5);
    head1 -> next ->next ->next ->next ->next = newNode(6);
    head1 -> next ->next ->next ->next ->next ->next = newNode(7);
    head1 -> next ->next ->next ->next ->next -> next ->next = newNode(8);

    printf("Given linked list\n");
    printList(head1);
    reverseList(&head1);
    printf("Reversed linked list\n");
    printList(head1);
    return 0;

    

}