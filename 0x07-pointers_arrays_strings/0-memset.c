#include "main.h"
/**
 * char *_memset - function that fills memory with a constant byte
 * s: pointer array
 * @b: string
 * @n: variable
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

