#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

struct Node *head;

struct Node *getNewNode(int x)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));

    temp->data = x;
    struct Node *next = NULL;
    struct Node *prev = NULL;
    return (temp);
}

void InsertAtHead(int x)
{
    struct Node *temp = getNewNode(x);
    if (head == NULL)
    {
        head = temp;
        return;
    }
    head->prev = temp;
    temp->next = head;
    head = temp;
}
void reversePrint()
{
    struct Node *temp = head;
    if (temp == NULL)
    {
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    printf("forward");
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->prev;
    }
}

void printList()
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}


int main()
{
    head = NULL;
    InsertAtHead(2);
    printList();
    reversePrint();
}