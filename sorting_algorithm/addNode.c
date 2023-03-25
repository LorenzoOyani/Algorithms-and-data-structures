#include <stdio.h>
typedef struct Node
{
    int data;
    struct Node *next;
} sNode;

sNode *addNode(struct Node **head, int n)
{
    sNode *last;
    last = *head;
    sNode *new = malloc(sizeof(sNode));
    if (new == NULL)
        return NULL;
    if (*head == NULL)
    {
        *head = new;

        return (*head);
    }
    while (last->next != NULL)
    {

        last = last->next;
    }
    last->next = new;
    return (*head);
}