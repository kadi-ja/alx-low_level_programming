#include "lists.h"

/**
 **add_nodeint_end - a function that adds a new node
 *at the end of a listint_t list.
 *@head: ptr
 *@n: the int
 *Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
  listint_t *beg, *end;

  beg = malloc(sizeof(listint_t));
  if (beg == NULL)
    return (NULL);

  beg->n = n;
  beg->beg = NULL;

  if (*head == NULL)
    *head = beg;

  else
    {
      last = *head;
      while (end->next != NULL)
	end = end->next;
      end->next = beg;
    }
  return (*head);
  free(beg);
}
