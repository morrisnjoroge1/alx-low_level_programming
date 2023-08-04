#include "lists.h"

/**
 * reverse_listint - function that reverses a linked list
 * @head: first pointer to the head node
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = current;
		current = *head;
		*head = next;
	}

	*head = current;

	return (*head);
}
