#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of
 *                            a dlistint_t linked list
 * @head: pointer to the head pointer of the list
 * @index: index of the node that should be deleted (starting at 0)
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *node;
    unsigned int i;

    if (head == NULL || *head == NULL)
        return (-1);

    node = *head;

    /* Delete head node */
    if (index == 0)
    {
        *head = node->next;
        if (*head)           /* new head exists -> clear its prev */
            (*head)->prev = NULL;
        free(node);
        return (1);
    }

    /* Traverse to the node at position index */
    for (i = 0; node && i < index; i++)
        node = node->next;

    /* index out of range */
    if (node == NULL)
        return (-1);

    /* Relink neighbors */
    if (node->prev)
        node->prev->next = node->next;
    if (node->next)
        node->next->prev = node->prev;

    free(node);
    return (1);
}
