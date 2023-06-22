#include "main.h"
/**
 * 4-print_most_numbers - print nimbers 0 - 9
 * Description: print numbers exluding 2, 4
 * Return: 0 - 98
 */

void print_most_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		if (c != 2 && c != 4)
		{
			_putchar(c + '0');
		}
	}
	_putchar('\n');
}
