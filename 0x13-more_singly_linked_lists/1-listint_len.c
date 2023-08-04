#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked
 *
 * @h: pointer to linked list nodes
 *
 * Return: node_count
 */
size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;

	/*transverse list*/
	while (h != NULL)
	{
		h = h->next;
		node_count++;
	}
	return (node_count);
}
