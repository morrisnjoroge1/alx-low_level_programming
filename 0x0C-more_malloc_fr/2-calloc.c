#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _calloc - a function that allocates
 *           memory for an array using malloc
 *
 *           It is basically the equivalent to
 *           malloc followed by memset
 *
 * @nmemb: size of array
 * @size: size of each element
 *
 * Return: pointer with new allocated memory
 *         or NULL if it fails
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = (char *)malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, nmemb * size);
	return (ptr);
}

/**
 * _memset - fills memory with a constant byte
 *
 * @p: input pointer that represents memory
 *     block to fill
 * @m: characters to fill
 * @n: number of bytes to be filled
 *
 * Return: A pointer to the filled memory area
*/
char *_memset(char *p, char m, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		p[i] = m;
	return (p);
}
