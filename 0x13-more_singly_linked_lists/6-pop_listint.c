#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 *
 * @head: a pointer to list
 *
 *Return: empty
 */
int pop_listint(listint_t **head)
{
	listint_t *node, *next;
	int n;

	if (head == NULL) /*if empty*/
		return (0);
	node = *head;
	next = node->next;
	n = node->n;
	free(node);
	*head = next;
	return (n);
}
