#include "lists.h"
#include <stdio.h>

/**
 *print_listint -  a function that prints all the elements of a listint_t list.
 *@h: head of the node
 *Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{

size_t num = 0;
while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
