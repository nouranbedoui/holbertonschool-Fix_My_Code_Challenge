#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes a node at a given index
 * @head: pointer to pointer to the head of the list
 * @index: index of node to delete
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *h;
    unsigned int i;

    if (!head || !*head)
        return (-1);

    h = *head;
    for (i = 0; h && i < index; i++)
        h = h->next;

    if (!h)
        return (-1);

    if (h->prev)
        h->prev->next = h->next;
    else
        *head = h->next;  /* deleting head */

    if (h->next)
        h->next->prev = h->prev;

    free(h);
    return (1);
}
