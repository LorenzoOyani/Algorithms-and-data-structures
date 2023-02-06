#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

void push(struct Node **head, int new_data)
{
    struct Node *getNewNode = (struct Node *)malloc(sizeof(struct Node));

    getNewNode->data = new_data;
    getNewNode->next = NULL;
    getNewNode->prev = NULL;

    getNewNode->next = (*head);
    getNewNode->prev = NULL;

    if ((*head) != NULL)
    {
        (*head)->prev = getNewNode;
        (*head) = getNewNode;
    }
}

// add a node after  a given Node;

void insertAfter(struct Node *prev_node, int new_data)
{
    if (prev_node == NULL)
    {
        printf("The given previous node cannot be Null");
        return;
    }

    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = new_data;

    newNode->next = prev_node->next;
    prev_node->next = newNode;

    newNode->prev = prev_node;
    if (newNode->next != NULL)
    {
        newNode->next->prev = newNode;
    }
}

void append(struct Node **head, int new_data)
{
    struct Node *new_Node = (struct Node *)malloc(sizeof(struct Node));

    struct Node *last = (*head);

    new_Node->data = new_data;

    new_Node->next = NULL;

    if (*head == NULL)
    {
        new_Node->prev = NULL;
        *head = new_Node;
        return;
    }

    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = new_Node;

    new_Node->prev = last;

    return;
}