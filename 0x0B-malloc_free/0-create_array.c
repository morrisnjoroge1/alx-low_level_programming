#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/*
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 *
 * @int size: array
 * @char c: array of string
 *
 * Return: Null if is 0 or 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	if (size == 0)
		return (NULL);
	ar = malloc(size * sizeof(char));

	if (ar == NULL)
		return (NULL); /*allocation of memory failed*/
	for (i = 0; i < size; i++)
		ar[i] = c;
	return (ar);
}
