#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: first node of the list
 * @index: nth index number of node, starting at 0
 *
 * Return:  node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int num = 0;
	listint_t *node = head;

	if (head == NULL)
		return (NULL);
	while (num < index)
	{
		num++;
		node = node->next;
		if (node == NULL)
			return (NULL);
	}
	return (node);
}
