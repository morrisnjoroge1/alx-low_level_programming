#include "lists.h"
/**
 * print_listint_safe - prints a linked list with a loop safely.
 * @head: pointer to  node of the linked list
 * Return: number of nodes, new_node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp = NULL;
	const listint_t *len = NULL;
	size_t count = 0;
	size_t new;

	temp = head;
	while (temp)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		count++;
		temp = temp->next;
		len = head;
		new = 0;
		while (new < count)
		{
			if (temp == len)
			{
				printf("-> [%p] %d\n", (void *)temp, temp->n);
				return (count);
			}
			len = len->next;
			new++;
		}
		if (!head)
			exit(98);
	}
	return (count);
}
