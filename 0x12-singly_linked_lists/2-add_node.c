#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - returns the length of a string.
 * @s : s is a character
 * Return: value is i
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * add_node - add new node at beginning of a list_t.
 * @head: head of a list_t.
 * @str: pointer to insert into element.
 * Return: number of nodes.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	add = malloc(sizeof(list_t));

	if (str == NULL)
	{
		return (NULL);/*invalid input*/
	}
	add->str = strdup(str);

	add->len = strlen(str);
	add->next = *head;
	*head = add;

	return (add);
}
