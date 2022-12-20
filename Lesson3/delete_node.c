#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first node in the list
 * @index: index of the node to delete
 * Return: 1 (Success), or -1 (Fail)
 */


typedef struct listint_s
{
    int data;
    struct listint_s *next;
} listint_t;


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    unsigned int i;
    listint_t *new, *temp = *head;

    if( temp ==NULL)
            return (-1);

    if(index  == 0)
    {
        *head = (*head) -> next;
        free(temp);
        return (-1);
    }

    for ( i =0; i < (index -1); i++)
    {
        if(temp -> next == NULL)
            return (-1);

        temp = temp -> next;    
    }
    new = temp -> next;
    temp -> next = new -> next;
    free(new);
    return (1);



}


