#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes the node at a given index
 * @head: double pointer to the head of the list
 * @index: index of the node to delete (starting at 0)
 *
 * Return: 1 if successful, -1 if failure
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
        if (*head)
            (*head)->prev = NULL;
        free(node);
        return (1);
    }

    /* Traverse to the node at the given index */
    for (i = 0; node && i < index; i++)
        node = node->next;

    /* Index out of range */
    if (node == NULL)
        return (-1);

    /* Re-link previous and next nodes */
    if (node->prev)
        node->prev->next = node->next;
    if (node->next)
        node->next->prev = node->prev;

    free(node);
    return (1);
}
