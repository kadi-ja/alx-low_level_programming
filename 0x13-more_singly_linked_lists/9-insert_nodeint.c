#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index -  a function that inserts a
 * new node at a given position.
 * @head: double pointer
 * @idx: index of the node
 * @n: new node value
 * Return: the address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *end, *beg;

if (head == NULL)
return (NULL);
if (idx != 0)
{
end = *head;
for (i = 0; i < idx - 1 && end != NULL; i++)
{
end = end->next;
}
if (end == NULL)
return (NULL);
}
beg = malloc(sizeof(listint_t));
if (beg == NULL)
return (NULL);
beg->n = n;
if (idx == 0)
{
beg->next = *head;
*head = beg;
return (beg);
}
beg->next = end->next;
end->next = beg;
return (beg);
}
