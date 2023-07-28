#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - length of a string
 * @str: string to the length of
 *
 * Return: length of string
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
 * add_node_end -  new node to the end of linked list
 * @head: double pointer to a linked list
 * @str: string to add to the new node
 *
 * Return: pointer to the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tmp;

	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);/*invalid input*/
	}
	new_node->str = strdup(str);
	/*duplicare of input string*/
	new_node->len = strlen(new_node->str);
			new_node->next = NULL;/*if this wll be last node*/
			if (*head == NULL)/*if list is empty, next node head*/
			{
				*head = new_node;
				return (new_node);
			}
			tmp = *head;
			while (tmp->next)
				tmp = tmp->next;
			tmp->next = new_node;
			return (new_node);
}
