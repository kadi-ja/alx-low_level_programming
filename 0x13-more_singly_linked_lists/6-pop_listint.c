#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - a function that deletes the head node
 *of a listint_t linked list,
 *and returns the head node’s data (n).
 * @head: a double pointer
 *Return: void
 */

int pop_listint(listint_t **head)
{
listint_t *beg;
int l;

if (head == NULL || *head == NULL)
return (0);
beg = *head;
*head = beg->next;
l = start->n;
free(beg);
return (l);
}

