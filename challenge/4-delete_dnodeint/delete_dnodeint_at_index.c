#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 * @head: double pointer to head of the list
 * @index: index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *node;
    unsigned int i;

    if (head == NULL || *head == NULL)
        return (-1);

    node = *head;

    /* delete head */
    if (index == 0)
    {
        *head = node->next;
        if (*head)
            (*head)->prev = NULL;
        free(node);
        return (1);
    }

    for (i = 0; node && i < index; i++)
        node = node->next;

    if (node == NULL)
        return (-1);

    /* properly re-link neighbors */
    if (node->prev)
        node->prev->next = node->next;
    if (node->next)
        node->next->prev = node->prev;

    free(node);
    return (1);
}
