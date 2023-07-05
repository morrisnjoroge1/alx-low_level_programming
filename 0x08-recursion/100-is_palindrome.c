#include "main.h"
#include <string.h>
/*
 * is_palindrome - string is a palindrome
 * @s: string
 *
 * Return: 1 or 0
 */
int is_palindrome_helper(char *s, int start, int end);

int is_palindrome(char *s)
{
	int len = strlen(s);

	if (*s == '\0')
		return (1); /*empty string*/

	return (is_palindrome_helper(s, 0, len - 1));
}

/*
 * is_palindrome_helper - palindrome check recursively
 * @s:string
 * @end: input
 * Return: 1 or 0
 */

int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1); /*middle of string is palindrome*/
	if (s[start] != s[end])
		return (0); /*not matching*/
	return (is_palindrome_helper(s, start + 1, end - 1));
}
