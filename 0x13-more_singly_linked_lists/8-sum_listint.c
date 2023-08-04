#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to first node
 *
 * Return: 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *node = head;

	if (head == NULL)
		return (0);
	while (node)
	{
		total += node->n;
		node =  node->next;
	}
	return (total);
}
