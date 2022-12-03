#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>


typedef struct listint_s
{
    int data;
    struct listint_s *next;
} listint_t;


/**
 * looped_listint_count - Counts the number of unique nodes
 * in a looped listint_t linked list.
 *
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */

size_t looped_listint_count(listint_t *head)
{
    listint_t *slow, *fast;
    size_t nodes = 1;

    if(head == NULL || head ->next == NULL)
            return (0);


    slow = head -> next;
    fast = (head-> next) -> next;

    while(slow)
    {
        
        if(slow == fast)
        {
            slow = head;
            while(slow != fast)
            {
                nodes++;
                slow = slow -> next;
                fast = fast -> next;
            }
            slow = slow -> next;

            while(slow !=fast)
            {
                nodes++;
                slow = slow -> next;
            }
        }
        return (nodes);


    }
    slow = slow -> next;
    fast = (fast -> next) -> next;

}

/**
 * free_listint_safe - Frees a listint_t list safely (ie.
 * can free lists containing loops)
 *
 * @h: A pointer to the address of
 * the head of the listint_t list.
 *
 * Return: The size of the list that was freed.
 *
 * Description: The function sets the head to NULL.
 */

size_t free_listint_safe(listint_t **h)
{
    listint_t *temp;
    size_t nodes, index;
    nodes = looped_listint_count(*h);

    if(nodes == 0)
    {
        for(; h !=NULL && *h !=NULL ; nodes++)
        {
            temp = (*h) -> next;
            free(*h);
            *h = temp;
        }

    }
    else{
        for(index = 0; index < nodes; index++)
        {
            temp = (*h) -> next;
            free(*h);
            *h = temp;
        }

        *h = NULL;
    }

    h = NULL;

    return(nodes);

}