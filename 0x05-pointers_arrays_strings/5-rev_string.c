#include "main.h"
#include <string.h>
/**
 * rev_string - reverses a string
 * s: *s
 * Return: void
 */
void rev_string(char *s)
{
	int begin = 0;
	int end = strlen(s) - 1;

	while (begin < end)
	{
		char temp = s[begin];

		s[begin] = s[end];
		s[end] = temp;
		begin++;
		end--;

	}
}
