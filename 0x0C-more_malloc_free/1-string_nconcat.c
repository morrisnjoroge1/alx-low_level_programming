#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * string_nconcat - function that concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 * @n: bytes of @s2 to add to @s1 to be a new string
 *
 * Return: new string followed by the first @n bytes
 *         of string 2 @s2 or NULL
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2;
	char *rst;
	int rst_len;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n > len2)
	{
		n = len2;
	}
	 rst_len = len1 + n;

	rst = (char *)malloc((rst_len + 1) * sizeof(char));
	if (rst == NULL)
	{
		return (NULL);
	}
	memcpy(rst, s1, len1);
	memcpy(rst + len1, s2, n);
	rst[rst_len] = '\0';
	return (rst);
}
