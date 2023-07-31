#include "lists.h"
#include <stdlib.h>

/**
 * free_listint -  frees a listint_t list
 *
 * @head: pointer of first node
 *
 * Return: NULL
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (node != NULL)
	{
		node = head->next;
		head = node;
		free(node);
	}
}
