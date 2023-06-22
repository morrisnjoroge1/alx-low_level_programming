#include "main.h"
/**
 * print_line - draws a straight line in terminal
 * @n: numbers of line to draw
 * Return: ('\n') if n is 0 or less
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
