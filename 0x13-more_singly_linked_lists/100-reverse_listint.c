#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list
 *
 * @head: pointer to node list
 *
 * Return: pointer to the first node of the reversed list
 *
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p_node,*next_node, *current_node = *head;

	p_node = NULL;

	while (current_node != NULL)
	{
		next_node = current_node->next;
		current_node->next =p_node;
		current_node = next_node;
	}
	*head = p_node;
	return (p_node);
}
