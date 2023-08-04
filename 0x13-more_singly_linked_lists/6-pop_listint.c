#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to head node
 *
 * Return: head node’s data (n), 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int p;

	if (!head || !*head)
		return (0);

	p = (*head)->n;
	node = (*head)->next;
	free(*head);
	*head = node;

	return (p);
}
