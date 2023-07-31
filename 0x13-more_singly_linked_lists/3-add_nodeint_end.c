#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 *
 * @head: pointer to linked list
 *
 * @n: node to add
 *
 * Return: adds a new node at the end of a listint_t list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *current;

	new_node = malloc(sizeof(listint_t));

	if (head == NULL)
		return (NULL);
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL; /*new_node becomes last*/
	
	current = *head;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new_node;
	return (new_node);
}
