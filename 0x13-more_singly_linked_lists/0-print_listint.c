#include <stdio.h>
#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list
 *
 * @h: pointer of link list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	/*if (h == NULL)
	{
		return (0);
	}*/
	/*transverse through list*/
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;/*to next node*/
		node_count++;
	}
	return (node_count);
}
