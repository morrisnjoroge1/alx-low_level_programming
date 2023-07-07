#include "main.h"
/*
 * _memset _ fill a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @d: the design value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[n] = b;
		n--;
	}
	return (s);
}
