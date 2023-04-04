#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - a function that frees a listint_t list.
 * @head: the head of the list
 * Return: f
 */

void free_listint(listint_t *head)
{
listint_t *nxt;

while (head != NULL)
{
nxt = head->nxt;
free(head);
head = nxt;
}
}
