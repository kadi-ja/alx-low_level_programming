#include "lists.h"

/**
 * sum_listint -  a function that returns the sum of
 *all the data (n) of a listint_t linked list.
 * @head: ptr to the 1st node
 * Return: sum of all the data
 */

int sum_listint(listint_t *head)
{
int sum = 0;

while (head != NULL)
{
sum = sum + head->n;
head = head->next;
}
return (sum);
}
