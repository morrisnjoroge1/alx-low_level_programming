#include "main.h"
/*
 * _puts_recursion - pointer of string
 * @s: pointer of arrays
 *
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return ;
	}
	_putchar(*s);
	_puts_recursion(s+1);
}
