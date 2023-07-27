#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - check the code for Holberton School students.
 * @h: name of the list
 * Return: the number of nodes.
 */

size_t print_list(const list_t *h)
{
	int node_count = 0;

	/* transverse through array of linked items*/
	while (h != NULL)
	{
		/*if pointer is null print nill/ [0]*/
		if (h->str == NULL)
		{
			printf("[%d] (nil)\n", node_count);
		}
		else /*print the str*/
		{
			printf("[%d] %s\n", node_count, h->str);
		}

		/*to next node*/
		h = h->next;
		node_count++;
	}
	return (node_count);
}
