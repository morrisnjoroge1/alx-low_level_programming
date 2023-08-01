#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t linked list
 *
 * @head: pointer to linked nodes
 * @index: index of node to be deleted Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *temp, *current_node = *head;

	if (head == NULL)
		return (-1); /*failed*/

	if (index == 0)
	{
		*head = (*head)->next;
		free(current_node);
		return (1); /*success*/
	}

	for (count = 0; count < (index - 1); count++)
	{
		if (current_node->next == NULL)
			return (-1);

		current_node = current_node->next;
	}
	temp = current_node->next;
	current_node->next = temp->next;
	free(temp);
	return (1);
}
