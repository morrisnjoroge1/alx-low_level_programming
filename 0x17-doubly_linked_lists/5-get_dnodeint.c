#include "lists.h"

/**
 * get_dnodeint_at_index - function that Locates a node in a list.
 * @head: The head of the dlistint_t list.
 * @index: The node to locate.
 *
 * Return: NULL- if there is no node.
 *         Otherwise - the address of the located node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
