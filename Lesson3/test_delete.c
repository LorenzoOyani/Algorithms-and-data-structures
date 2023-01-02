#include <stdio.h>
#include <stdlib.h>

typedef struct list_int_s
{
    int data;
    struct list_int_s* next;
} list_int_t;


int delet_node_index(struct list_int_s** head, unsigned int index)
{
        unsigned int i;
        struct list_int_s* new, *temp = head;

        if(temp == NULL)
                return (- 1);
        
        if(index == 0)
        {
            
            (*head) = (*head) -> next;
            free(temp);
            return( -1);
        }
        for( i = 0; i < index - 1; i++)
        {
            if(temp -> next ==NULL)
                    return (-1);

               temp = temp -> next;

        }
        new = temp -> next;
        temp -> next = new  -> next;
        free(new);
        return (0);   



}