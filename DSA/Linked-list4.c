#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void push(struct Node **head, int new_data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

    new_node->data = new_node;
    new_node->next = *head;

    *head = new_node;
}

void deleteNode(struct Node **head, int key)
{
    struct Node *temp;
    struct Node *prev;

    // store head node in temp;
    temp = *head;

    if (temp != NULL && temp->data == key)
    {
        *head = temp->next;
        free(temp);
        return;
    }

    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL)
        return;

    prev->next = temp->next;
    free(temp);
}

void printList(struct Node *head)
{
    while (head != NULL)
    {
        printf("%d", head->data);
        head = head->data;
    }
}

int main()
{
    struct Node *head = NULL;
    push(&head, 7);
    push(&head, 1);
    push(&head, 3);
    push(&head, 2);

    puts("created Linked List: ");
    printList(head);
    deleteNode(&head, 1);
    puts("\nLinked List after Deletion of 1: ");
    printList(head);
    return (0);
}