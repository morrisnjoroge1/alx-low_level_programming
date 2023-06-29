#include "main.h"
#include <string.h>
/**
 * strncpy - function that copies a string
 * @dest: string
 * @src: string
 * @n:variable
 * Return: (dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = '\0';
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return dest;
}