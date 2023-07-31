#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list
 *
 * @head: pointer for list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *node, *next =NULL;

	if (head == NULL)
		return;
	node = *head;

	while (node != NULL)
	{
		node = node->next;
		free(node);
		node = next;
	}
}
