#include "lists.h"

/**
 * free_listp(list) - function that frees a list
 * @head: pointer node of the list
 *
 * return:
 */
void free_listp(listp_t **head)
{
	listint_t *c = *head, *t;
	
	if(head != NULL)
	{
		c = *head;
		while ((t = c)!= NULL)
		{
			c = c->next;
			free(t);
		}
		head = NULL;
	}
}

/**
 * print_listint_safe - prints a listint_t linked list.
 *
 * @head: pointer to node list
 *
 * Return: the number of nodes in the list or exit(98)
 */

size_t print_listint_safe(const listint_t *head)
{
	listint_t *ptr = NULL, *new_node = *head, *count_node;
	size_t node = 0;

	while (head != NULL)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			exit(98);
		new_node->p = (*head);
		new_node->next = ptr;
		ptr = new_node;
		count_node = ptr;

		while (count_node->next ! NULL)
		{
			count_node = count_node->next;

			if (head == count_node->p)
			{
				printf("->[%p]%d\n",(*head), head->n);
				free_listp(&ptr);
				return (node);
			}
		}
		print("[%p]%d\n", (*head), head->n);
		head = head->next;
		count++;
	}
	free_listp(&ptr);
	return (count);
}
