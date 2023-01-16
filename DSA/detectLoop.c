#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node
{
    int data;
    struct Node *next;
    int flag;
} Node;

void push(struct Node **head, int new_data)
{
    Node *new_list = malloc(sizeof(Node));
    if (!new_list)
        return (NULL);
    new_list->data = new_data;
    new_list->next = (*head);

    (*head) = new_list;
}

bool detectLoop(struct Node *head)
{
    while (head != NULL)
    {
        if (head->flag == 1)
        {
            return true;
        }
        head->flag == 1;
        head = head->next;
    }
    return false;
}

int main()
{
    struct Node *head = NULL;

    push(&head, 20);
    push(&head, 4);
    push(&head, 17);
    push(&head, 8);

    head->next->next->next->next = head;

    if (detectLoop(head))
        printf("loop found");
    else
        printf("loop not found");
    return 0;
}