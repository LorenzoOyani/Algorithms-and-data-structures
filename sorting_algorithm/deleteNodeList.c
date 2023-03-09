#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
} Node;

void push(struct Node **list, int data)
{
    Node *new_node = malloc(sizeof(Node));

    new_node->data = data;
    new_node->next = (*list);

    (*list) = new_node;
}

void deleteNodeAtList(struct Node **head, int position)
{
    Node *temp;
    Node *prev;
    int i;

    temp = *head;
    prev = *head;

    for (i = 0; i < position; i++)
    {
        if (i == 0 && position == 1)
        {
            *head = (*head)->next;
            free(temp);
        }
        else
        {
            if (i == position - 1 && temp)
            {
                prev->next = temp->next;
                free(temp);
            }
            else
            {
                prev = temp;
                if (prev == NULL)
                {
                    break;
                }
                temp = temp->next;
            }
        }
    }
}

void printList(Node *head)
{

    while (head)
    {
        printf("%i, [%p] = %p", head->data, head, head->next);
        head = head->next;
    }
    printf("\n");
}

int main()
{
    Node *list = malloc(sizeof(Node));

    list->next = NULL;
    push(&list, 1);
    push(&list, 2);
    push(&list, 3);

    deleteNodeAtList(&list, 1);
    printList(list);

    return (0);
}