#include "lists.h"
#include <stdlib.h>

/**
 *add_nodeint - a function that adds a new node at the beginning of a listint_t list.
 *@head: head of the double pointer
 *@n: int
 *Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
 listint_t *qtr;
 if (head == NULL)
 return (NULL);
 qtr = malloc(sizeof(listint_t));
 if (qtr == NULL)
 return (NULL);
 qtr->n = n;
 qtr->next = *head;
 *head = qtr;
 return (qtr);
 free (qtr);
}
