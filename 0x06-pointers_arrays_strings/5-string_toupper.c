#include "main.h"
/**
 * _toupper - changr lower to uppercase
 *
 * Return: str
 */
char *string_toupper(char *)
{
	int n = 0;

	while (str[n] != '\0')
	{
		if (str[n] >= 'a' && str[n] <= 'Z')
		{
			str[n] = str[n] - ('a' - 'A');
		}
		n++;
	}
	return str;
}
