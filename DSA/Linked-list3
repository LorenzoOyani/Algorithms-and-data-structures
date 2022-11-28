#include <stdio.h>
#include <stdlib.h>

/**
 * deleting a element from a linked list..
 * delete from any position fromt the list
*/

typedef struct Node{
    int number;
    struct Node* next;
} Node;

void push(struct Node** list, int new_data)
{
    Node* new_node = malloc(sizeof(Node));

    new_node -> number = new_data;
    new_node ->next = *list;

    *list = new_node;
}

void deleteN(struct Node** head, int position)
{
    int i;
     
    Node* temp;
    Node* prev;

    temp = *head;
    prev = *head;

    for ( i = 0; i < position; i++)
    {
        if(i == 0 && position == 1)
        {
            *head = (*head) -> next;
            free(temp);
        }
        else{
            if( i == position -1 && temp){
                prev -> next = temp -> next;
                free(temp);
            } else{
                prev = temp;

                if(prev ==NULL)
                    break;
                temp = temp -> next;    
            }
        }
    }
}


void printList(Node* head)
{
    while(head){
        printf("[%i], [%p] ->%p \n", head ->number, head, head ->next);
        head = head -> next;
    }
    printf("\n");
        
}
int main()
{
    Node* list  = malloc(sizeof(Node));

    list ->next = NULL;
    push(&list, 1);
    push(&list, 2);
    push(&list, 3);

    printList(list);

    deleteN(&list, 1);
    printList(list);
    return (0);
    
}