#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 *
 * @head: the head of the list
 *
 * Return: NULL if error
 */
void free_listint(listint_t *head)
{
	listint_t *new;

	while (head)
	{
		new = head->next;
		free(head);
		head = new;
	}
}
