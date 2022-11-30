#include "lists.h"


/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node(list_t **head, const char* str)
{
    list_t *new;
    size_t nlen;

    new = malloc(sizeof(list_t));
    if(new == NULL)
            return (NULL);

    new -> str = strdup(str);
    for(; str[nlen] !='\0'; nlen++)
            ;
    new -> len = nlen;
    new -> next = *head;

    *head = new;

    return (*head);        
    
}