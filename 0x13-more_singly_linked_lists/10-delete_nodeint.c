#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index -  a function that deletes the node at
 * index index of a listint_t linked list.
 * @head: double pointer
 * @index: index of node
 *
 * Return: pointer to the index node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i;
listint_t *hlp, *next;

if (head == NULL || *head == NULL)
return (-1);

if (index == 0)
{
next = (*head)->next;
free(*head);
*head = next;
return (1);
}
hlp = *head;

for (i = 0; i < index - 1; i++)
{
if (hlp->next == NULL)
return (-1);

hlp = hlp->next;
}
next = hlp->next;
hlp->next = next->next;
free(next);
return (1);

}
