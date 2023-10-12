#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: header pointer of list
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0; /*intiate the count*/

	if (h == NULL)
		return (count);
	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n); /*print current node data*/
		count++;
		h = h->next;/*moving to next node*/
	}
	return (count);
}
