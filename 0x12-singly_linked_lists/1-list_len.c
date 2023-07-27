#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - check the code for Holberton School students.
 * @h: name of the list
 * Return: the number of nodes.
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	/*transverse through the linked list*/
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
