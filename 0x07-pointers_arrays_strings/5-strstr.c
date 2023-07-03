#include "main.h"
#include <stddef.h>
/**
 * _strst -  locates a substring
 * @haystack: string
 * @needle: substring
 * Return:haystack or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack == '\0')
	{
		char *haystack_ptr = haystack;
		char *needle_ptr = needle;

		while (*haystack_ptr == *needle_ptr && *needle_ptr != '\0')
		{
			haystack++;
			needle++;
		}
		if (*needle_ptr == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
