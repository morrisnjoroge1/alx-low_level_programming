#include "lists.h"

/**
 * dlistint_len - counts number of elements in a list
 * @h: head pionter of elements in list
 *
 * Return: number of elements in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0; /*initialize the count*/

	while (h != NULL)
	{
		count++;
		h = h->next; /*next node*/
	}
	return (count);
}
