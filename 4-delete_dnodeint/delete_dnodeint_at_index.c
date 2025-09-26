#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes the node at index `index` of a
 *                             dlistint_t linked list
 * @head: pointer to pointer to head node
 * @index: index of the node to delete
 *
 * Return: 1 if success, -1 if fail
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
        *head = h->next;

    if (h->next)
        h->next->prev = h->prev;

    free(h);
    return (1);
}
