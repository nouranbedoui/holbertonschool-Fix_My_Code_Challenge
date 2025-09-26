#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 * @head: pointer to the head of the list
 * @index: index of the node to delete
 * Return: 1 if successful, -1 if failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current;
    unsigned int i = 0;

    if (!head || !*head)
        return (-1);

    current = *head;

    /* Deleting the head node */
    if (index == 0)
    {
        *head = current->next;
        if (*head)
            (*head)->prev = NULL;
        free(current);
        return (1);
    }

    /* Traverse to the node at position index */
    while (current && i < index)
    {
        current = current->next;
        i++;
    }

    if (!current) /* index out of range */
        return (-1);

    /* Re-link previous and next nodes */
    if (current->prev)
        current->prev->next = current->next;
    if (current->next)
        current->next->prev = current->prev;

    free(current);
    return (1);
}
