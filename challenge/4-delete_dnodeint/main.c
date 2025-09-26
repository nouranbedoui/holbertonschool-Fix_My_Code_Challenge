#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    dlistint_t *head = NULL;

    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);

    print_dlistint(head);

    delete_dnodeint_at_index(&head, 2);  /* Delete node at index 2 */
    print_dlistint(head);

    delete_dnodeint_at_index(&head, 0);  /* Delete head */
    print_dlistint(head);

    free_dlistint(head);
    return (0);
}
