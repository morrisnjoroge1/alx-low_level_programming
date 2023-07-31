#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list
 *
 * @head: pointer to first node
 *
 * Return: 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *node = head;
	int sum = 0;

	if (head = NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
