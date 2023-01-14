#include <stdio.h>
#include <stdlib.h>

typedef struct listin_s
{
    int n;
    struct listin_s *next;
} listin_t;

int check_cycle(listin_t *list)
{
    listin_t *slow;
    listin_t *fast;

    if (!list)
        return 0;
    while (slow && fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            return 1;
        }
        return 0;
    }
}