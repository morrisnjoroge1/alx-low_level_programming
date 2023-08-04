#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list
 * @head: head pointer
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *array, *node;	
	array = node = head;

	if (!head)
		return (NULL);

	while (array && node && node->next)
	{
		node = node->next->next;
		array = array->next;
		if (node == array)
		{
			array = head;
			while (array != node)
			{
				array = array->next;
				node = node->next;
			}
			return (node);
		}
	}

	return (NULL);
}
