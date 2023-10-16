#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer array
 * @accept: string
 * Return: s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *accept_ptr = accept;

		while (*accept_ptr != '\0')
		{
			if (*s == *accept_ptr)
				{
					return (s);
				}
			accept_ptr++;
		}
		s++;
	}
	return (NULL);
}
