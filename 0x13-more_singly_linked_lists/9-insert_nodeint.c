#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: pointer to node in list
 * @idx: index of the list where the new node should be added
 * @n: node to be addded
 *
 * Return:  address of the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current_node = *head, *new_node;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (head == NULL)
		return (NULL);

	/*new nodes at begining if index is 0*/
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	for (i = 0; i <idx - 1; i++)
	{
		if (current_node == NULL)
		{
			return (NULL);
		}
		current_node = current_node->next;
	}

	/*insert new node*/
	new_node->next = current_node->next;
	current_node->next = new_node;
	free(new_node);
	return (new_node);
}
