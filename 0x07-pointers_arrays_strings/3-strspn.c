#include "main.h"
#include <stddef.h>
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string
 * @accept:prefix string
 * @f: variable
 * @c: variable
 * Return: (c)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	int f;
	int i;

	while (*s != '\0')
	{
		f = 0;
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				f = 1;
				break;
			}
		}
		if (f == 0)
		{
			return (c);
		}
		c++;
		s++;
	}
	return (c);
}
