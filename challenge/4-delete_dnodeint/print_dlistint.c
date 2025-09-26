#include "lists.h"
#include <stdio.h>

/* Prints all elements of a dlistint_t list */
size_t print_dlistint(const dlistint_t *h)
{
    size_t count = 0;

    while (h)
    {
        printf("%d\n", h->n);
        h = h->next;
        count++;
    }

    return count;
}
