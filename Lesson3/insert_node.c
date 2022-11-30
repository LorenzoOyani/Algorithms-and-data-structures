#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>


/**
 * insert_nodeint_at_index - This function inserts a
 * new node at given position
 * @head: The head node
 * @idx: The index of the list where new node is to be added
 * @n: The integer data of the new node
 * Return: The address of the new inserted node or NULL if failed
 */


typedef struct listint_s
{
    int data;
    struct listint_s *next;
} listint_t;


listint_t *insert_Node_at_index(listint_t **head, unsigned int index, int n)
{
    unsigned int i = 0;
    listint_t *new, *temp;


    new = malloc(sizeof(listint_t));
    if(!new)
        return NULL;

    temp = *head;

    if( temp ==NULL)
            return(-1);

    new ->data = n;
    new ->next = NULL;        

    if(index  == 0)
    {
        new ->next = temp;
        (*head) = new;
        return (new);
    }        

    for (i = 0; i < (index -1); i++)
    {
        if(temp ==NULL || temp -> next == NULL)
        {
            return(NULL);
        }
        temp = temp -> next;
    }

    new ->next = temp -> next;
    temp -> next = new;
    return (new);
}