#include "main.h"
/**
 * strlen - returns the length
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int length = 0
		while (*s != '\0')
		{
			length++;
			s++;
		}
	return (length);
}
