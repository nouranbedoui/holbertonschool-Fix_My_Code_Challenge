#include "lists.h"
#include <stdlib.h>

/* Adds a new node at the end of a dlistint_t list */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new_node, *temp;

    new_node = malloc(sizeof(dlistint_t));
    if (!new_node)
        return NULL;

    new_node->n = n;
    new_node->next = NULL;

    if (!*head) /* empty list */
    {
        new_node->prev = NULL;
        *head = new_node;
        return new_node;
    }

    temp = *head;
    while (temp->next)
        temp = temp->next;

    temp->next = new_node;
    new_node->prev = temp;

    return new_node;
}
