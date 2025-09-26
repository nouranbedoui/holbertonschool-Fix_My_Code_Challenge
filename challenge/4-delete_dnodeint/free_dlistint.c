#include "lists.h"
#include <stdlib.h>

/* Frees a dlistint_t list */
void free_dlistint(dlistint_t *head)
{
    dlistint_t *temp;

    while (head)
    {
        temp = head->next;
        free(head);
        head = temp;
    }
}
